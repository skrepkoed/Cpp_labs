#include "MatrixStatistic.h"
#include <cstdlib>

//Сумма элементов
int MatrixStatistic::sum(StartAndEnd sae) {
  int* start = sae.start;
  int* end = sae.end;
  int sum = 0;
  while (start<=end)
  {
    sum += *start;
    start++;
  }
  return sum;
}
//Сумма элементов в матрцие
int MatrixStatistic::sumMatrixValues(int* matrix, int size)
{
   return sum(initializeMatrix(matrix, size));
}
//Сумма элементов в верхне-треугольной матрице
int MatrixStatistic::sumUpperTriangleValues(int* matrix, int size)
{
  return sum(getUpperTriangle(matrix, size));
}
//Сумма элементов в нижне-треугольной матрице
int MatrixStatistic::sumLowerTriangleValues(int* matrix, int size)
{
    return sum(getLowerTriangle(matrix, size));
}
//Среднее значение матрицы
double MatrixStatistic::matrixMeanValue(int* matrix, int size) {
  return sumMatrixValues(matrix, size) / (static_cast<double> (size*size));
}
//Среднее значение верхне-треугольной матрицы
double MatrixStatistic::meanUpperTriangleValue(int* matrix, int size) {
  StartAndEnd triangle = getUpperTriangle(matrix, size);
  double numberValuesInTriangle = triangle.numberElementsBetween();
  return sum(triangle) / (numberValuesInTriangle);
}
//Среднее значение нижне-треугольной матрицы
double MatrixStatistic::meanLowerTriangleValue(int* matrix, int size) {
  StartAndEnd triangle = getLowerTriangle(matrix, size);
  double numberValuesInTriangle = triangle.numberElementsBetween();
  return sum(triangle) / (numberValuesInTriangle);
}
//Сумма элеметов в сроке
int MatrixStatistic::rowSum(int* matrix, int rowNumber, int size) {
    return sum(getRow(matrix, rowNumber, size));
}
//Сумма элеметов в столбце
int MatrixStatistic::columnSum(int* matrix, int columnNumber, int size) {
    return sum(getColumn(matrix, columnNumber, size));
}
//Среднее значение элементов в строке
double MatrixStatistic::meanRowValue(int* matrix, int rowNumber, int size) {
    return rowSum(matrix, rowNumber, size) / static_cast<double>(size);
}
//Среднее значение элементов в столбце
double MatrixStatistic::meanColumnValue(int* matrix, int columnNumber, int size) {
    return columnSum(matrix, columnNumber, size) / static_cast<double>(size);
}
//Ближайшее к среднему значение матрицы
int MatrixStatistic::closestToMeanValue(int* matrix, int size) {
  double meanValue = matrixMeanValue(matrix, size);
  int matrixSize = size*size;
  int closest=0;
  double diff=meanValue;
  int* end = matrix + matrixSize;
  while (matrix< end)
  {
    if (std::abs(*matrix-meanValue) < diff)
    {
      closest = *matrix;
      diff = std::abs(*matrix - meanValue);
    }
    matrix++;
  }
  return closest;
}


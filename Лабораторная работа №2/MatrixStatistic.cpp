#include "MatrixStatistic.h"
#include <cstdlib>

//����� ���������
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
//����� ��������� � �������
int MatrixStatistic::sumMatrixValues(int* matrix, int size)
{
   return sum(initializeMatrix(matrix, size));
}
//����� ��������� � ������-����������� �������
int MatrixStatistic::sumUpperTriangleValues(int* matrix, int size)
{
  return sum(getUpperTriangle(matrix, size));
}
//����� ��������� � �����-����������� �������
int MatrixStatistic::sumLowerTriangleValues(int* matrix, int size)
{
    return sum(getLowerTriangle(matrix, size));
}
//������� �������� �������
double MatrixStatistic::matrixMeanValue(int* matrix, int size) {
  return sumMatrixValues(matrix, size) / (static_cast<double> (size*size));
}
//������� �������� ������-����������� �������
double MatrixStatistic::meanUpperTriangleValue(int* matrix, int size) {
  StartAndEnd triangle = getUpperTriangle(matrix, size);
  double numberValuesInTriangle = triangle.numberElementsBetween();
  return sum(triangle) / (numberValuesInTriangle);
}
//������� �������� �����-����������� �������
double MatrixStatistic::meanLowerTriangleValue(int* matrix, int size) {
  StartAndEnd triangle = getLowerTriangle(matrix, size);
  double numberValuesInTriangle = triangle.numberElementsBetween();
  return sum(triangle) / (numberValuesInTriangle);
}
//����� �������� � �����
int MatrixStatistic::rowSum(int* matrix, int rowNumber, int size) {
    return sum(getRow(matrix, rowNumber, size));
}
//����� �������� � �������
int MatrixStatistic::columnSum(int* matrix, int columnNumber, int size) {
    return sum(getColumn(matrix, columnNumber, size));
}
//������� �������� ��������� � ������
double MatrixStatistic::meanRowValue(int* matrix, int rowNumber, int size) {
    return rowSum(matrix, rowNumber, size) / static_cast<double>(size);
}
//������� �������� ��������� � �������
double MatrixStatistic::meanColumnValue(int* matrix, int columnNumber, int size) {
    return columnSum(matrix, columnNumber, size) / static_cast<double>(size);
}
//��������� � �������� �������� �������
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


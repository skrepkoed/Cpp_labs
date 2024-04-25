#include"StartAndEnd.h"
#include "MatrixSorter.h"
#include "CustomQuickSort.h"

  
CustomQuickSort sorter;
//Получить минимальное значение в заданном диапазоне
  int MatrixSorter::getMinValue(StartAndEnd startAndEnd){
    int* start = startAndEnd.start;
    int* end = startAndEnd.end;
    return *(sorter.quickSort(start,end).start);
  }
  //Получить максимальное значение в заданном диапазоне
  int MatrixSorter::getMaxValue(StartAndEnd startAndEnd) {
     int* start = startAndEnd.start;
     int* end = startAndEnd.end;
     return *(sorter.quickSort(start, end).end);
  }

  //Максимальный элемент матрицы
  int MatrixSorter:: matrixMax(int* matrix, int matrixSize) {
    StartAndEnd sae = initializeMatrix(matrix, matrixSize);
    return getMaxValue(sae);
  }
  //Минимальный элемент матрицы
  int MatrixSorter:: matrixMin(int* matrix, int matrixSize) {
    return getMinValue(initializeMatrix(matrix, matrixSize));
  }

  //Минимальный элемент в верхне-треугольной матрицы
  int MatrixSorter:: upperTriangleMatrixMin(int* matrix, int size) {
    return getMinValue(getUpperTriangle(matrix, size));
  }
  //Максимальный элемент в верхне-треугольной матрицы
  int MatrixSorter:: upperTriangleMatrixMax(int* matrix, int size) {
      return getMinValue(getUpperTriangle(matrix, size));
  }

  //Максимальный элемент в нижне-треугольной матрицы
  int MatrixSorter:: lowerTriangleMatrixMin(int* matrix, int size) {
    return getMinValue(getLowerTriangle(matrix, size));
  }
  //Минимальный элемент в нижне-треугольной матрицы
  int MatrixSorter:: lowerTriangleMatrixMax(int* matrix, int size) {
    return getMaxValue(getLowerTriangle(matrix, size));
  }
  //Максимальный элемент главной диагонали
  int MatrixSorter::mainDiagonalMax(int* matrix, int size) {
      return getMaxValue(getMainDiagonal(matrix, size));
  }
  //Минимальный элемент главной диагонали
  int MatrixSorter::mainDiagonalMin(int* matrix, int size) {
      return getMinValue(getMainDiagonal(matrix, size));
  }
  //Максимальный элемент побочной диагонали
  int MatrixSorter::secondaryDiagonalMax(int* matrix, int size) {
      return getMaxValue(getSecondaryDiagonal(matrix, size));
  }
  //Минимальный элемент побочной диагонали
  int MatrixSorter::secondaryDiagonalMin(int* matrix, int size) {
      return getMinValue(getSecondaryDiagonal(matrix, size));
  }
  //Максимальный элемент строки
  int MatrixSorter::rowMax(int* matrix,int rowNumber, int size) {
      return getMaxValue(getRow(matrix,rowNumber, size));
  }
  //Минимальный элемент строки
  int MatrixSorter::rowMin(int* matrix, int rowNumber, int size) {
      return getMinValue(getRow(matrix, rowNumber, size));
  }
  //Максимальный элемент столбца
  int MatrixSorter::columnMax(int* matrix, int columnNumber, int size) {
      return getMaxValue(getRow(matrix, columnNumber, size));
  }
  //Минимальный элемент столбца
  int MatrixSorter::columnMin(int* matrix, int columnNumber, int size) {
      return getMinValue(getRow(matrix, columnNumber, size));
  }

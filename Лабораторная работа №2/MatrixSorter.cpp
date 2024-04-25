#include"StartAndEnd.h"
#include "MatrixSorter.h"
#include "CustomQuickSort.h"

  
CustomQuickSort sorter;
//�������� ����������� �������� � �������� ���������
  int MatrixSorter::getMinValue(StartAndEnd startAndEnd){
    int* start = startAndEnd.start;
    int* end = startAndEnd.end;
    return *(sorter.quickSort(start,end).start);
  }
  //�������� ������������ �������� � �������� ���������
  int MatrixSorter::getMaxValue(StartAndEnd startAndEnd) {
     int* start = startAndEnd.start;
     int* end = startAndEnd.end;
     return *(sorter.quickSort(start, end).end);
  }

  //������������ ������� �������
  int MatrixSorter:: matrixMax(int* matrix, int matrixSize) {
    StartAndEnd sae = initializeMatrix(matrix, matrixSize);
    return getMaxValue(sae);
  }
  //����������� ������� �������
  int MatrixSorter:: matrixMin(int* matrix, int matrixSize) {
    return getMinValue(initializeMatrix(matrix, matrixSize));
  }

  //����������� ������� � ������-����������� �������
  int MatrixSorter:: upperTriangleMatrixMin(int* matrix, int size) {
    return getMinValue(getUpperTriangle(matrix, size));
  }
  //������������ ������� � ������-����������� �������
  int MatrixSorter:: upperTriangleMatrixMax(int* matrix, int size) {
      return getMinValue(getUpperTriangle(matrix, size));
  }

  //������������ ������� � �����-����������� �������
  int MatrixSorter:: lowerTriangleMatrixMin(int* matrix, int size) {
    return getMinValue(getLowerTriangle(matrix, size));
  }
  //����������� ������� � �����-����������� �������
  int MatrixSorter:: lowerTriangleMatrixMax(int* matrix, int size) {
    return getMaxValue(getLowerTriangle(matrix, size));
  }
  //������������ ������� ������� ���������
  int MatrixSorter::mainDiagonalMax(int* matrix, int size) {
      return getMaxValue(getMainDiagonal(matrix, size));
  }
  //����������� ������� ������� ���������
  int MatrixSorter::mainDiagonalMin(int* matrix, int size) {
      return getMinValue(getMainDiagonal(matrix, size));
  }
  //������������ ������� �������� ���������
  int MatrixSorter::secondaryDiagonalMax(int* matrix, int size) {
      return getMaxValue(getSecondaryDiagonal(matrix, size));
  }
  //����������� ������� �������� ���������
  int MatrixSorter::secondaryDiagonalMin(int* matrix, int size) {
      return getMinValue(getSecondaryDiagonal(matrix, size));
  }
  //������������ ������� ������
  int MatrixSorter::rowMax(int* matrix,int rowNumber, int size) {
      return getMaxValue(getRow(matrix,rowNumber, size));
  }
  //����������� ������� ������
  int MatrixSorter::rowMin(int* matrix, int rowNumber, int size) {
      return getMinValue(getRow(matrix, rowNumber, size));
  }
  //������������ ������� �������
  int MatrixSorter::columnMax(int* matrix, int columnNumber, int size) {
      return getMaxValue(getRow(matrix, columnNumber, size));
  }
  //����������� ������� �������
  int MatrixSorter::columnMin(int* matrix, int columnNumber, int size) {
      return getMinValue(getRow(matrix, columnNumber, size));
  }

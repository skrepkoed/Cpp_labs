#pragma once
#include "StartAndEnd.h"
class MatrixStatistic
{
private:
    
  int sum(StartAndEnd sae);

public:
  
  int sumMatrixValues(int* matrix, int size);

  int sumUpperTriangleValues(int* matrix, int size);

  int sumLowerTriangleValues(int* matrix, int size);

  double matrixMeanValue(int* matrix, int size);

  double meanUpperTriangleValue(int* matrix, int size);

  double meanLowerTriangleValue(int* matrix, int size);

  int rowSum(int* matrix, int rowNumber, int size);

  int columnSum(int* matrix, int columnNumber, int size);

  double meanRowValue(int* matrix, int rowNumber, int size);

  double meanColumnValue(int* matrix, int columnNumber, int size);

  int closestToMeanValue(int* matrix, int size);

};


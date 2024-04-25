#pragma once
#include "StartAndEnd.h"
class MatrixSorter
{
private:
	 int getMinValue(StartAndEnd startAndEnd);
	 int getMaxValue(StartAndEnd startAndEnd);
public:
	 int matrixMax(int* matrix, int matrixSize);
	 
	 int matrixMin(int* matrix, int matrixSize);
	 
	 int upperTriangleMatrixMax(int* matrix, int size);
	 
	 int upperTriangleMatrixMin(int* matrix, int size);
	 
	 int lowerTriangleMatrixMin(int* matrix, int size);
	 
	 int lowerTriangleMatrixMax(int* matrix, int size);

	 int mainDiagonalMax(int* matrix, int size);

	 int mainDiagonalMin(int* matrix, int size);

	 int secondaryDiagonalMax(int* matrix, int size);

	 int secondaryDiagonalMin(int* matrix, int size);

	 int rowMax(int* matrix, int rowNumber, int size);

	 int rowMin(int* matrix, int rowNumber, int size);

	 int columnMax(int* matrix, int columnNumber, int size);

	 int columnMin(int* matrix, int columnNumber, int size);
};


#include "StartAndEnd.h"
//Получить строку матрицы
StartAndEnd getRow(int* startMatrix, int rowNumber, int rowLength)
{
    int* startRowPointer = startMatrix + rowNumber * rowLength;
    int* row = new int[rowLength];
    for (size_t i = 0; i < rowLength; i++, startRowPointer++)
    {
        row[i] = *startRowPointer;
    };
    StartAndEnd sae(row, row + rowLength);
    return sae;
}
//Получить столбец матрицы
StartAndEnd getColumn(int* startMatrix, int columnNumber, int columnLength)
{
    int* startColumnPointer = startMatrix + columnNumber;
    int* column = new int[columnLength];
    column[0] = *startColumnPointer;
    for (size_t i = 1; i < columnLength; i++)
    {
        startColumnPointer = startColumnPointer + columnLength;
        column[i] = *startColumnPointer;
    };
    StartAndEnd sae(column, column + columnLength);
    return sae;
}
//Получить главную диагональ матрицы
StartAndEnd getMainDiagonal(int* startMatrix, int size)
{
    int* start = new int[size];
    start[0] = *startMatrix;
    int offset = size + 1;
    for (size_t i = 1; i < size; i++)
    {
        startMatrix = startMatrix + offset;
        start[i] = *startMatrix;
    };
    StartAndEnd sae(start, start + size);
    return sae;
}
//Получить побочную диагональ матрицы
StartAndEnd getSecondaryDiagonal(int* startMatrix, int size)
{
    int* firstElementPonter = startMatrix + (size - 1);
    int* start = new int[size];
    start[0] = *firstElementPonter;
    int offset = size - 1;
    for (size_t i = 1; i < size; i++)
    {
        firstElementPonter = firstElementPonter + offset;
        start[i] = *firstElementPonter;
    };
    StartAndEnd sae(start, start + size);
    return sae;
}
//Получить верхне-треугольную матрицы
StartAndEnd getUpperTriangle(int* startMatrix, int size) {
    int triangleSize = size * (size + 1) / 2;
    int* triangle = new int[triangleSize];
    for (size_t k = 0, n = 0; k < triangleSize; startMatrix++, n++)
    {
        int i = n / size;
        int j = n % size;
        if (!(i > j))
        {
            triangle[k] = *startMatrix;
            k++;
        };
    }
    return StartAndEnd(triangle, triangle + triangleSize);
}

//Получить нижне-треугольную матрицы
StartAndEnd getLowerTriangle(int* startMatrix, int size) {
    int triangleSize = size * (size + 1) / 2;
    int* triangle = new int[triangleSize];
    for (size_t k = 0, n = 0; k < triangleSize; startMatrix++, n++)
    {
        int i = n / size;
        int j = n % size;
        if (!(i < j))
        {
            triangle[k] = *startMatrix;
            k++;
        };
    }
    return StartAndEnd(triangle, triangle + triangleSize);
}
StartAndEnd initializeMatrix(int* matrix, int matrixSize) {
    int matrixElementsNumber = matrixSize * matrixSize - 1;
    StartAndEnd startAndEnd(matrix, matrix + (matrixElementsNumber));
    return startAndEnd;
}

int StartAndEnd::numberElementsBetween() {
    return end - start;
}
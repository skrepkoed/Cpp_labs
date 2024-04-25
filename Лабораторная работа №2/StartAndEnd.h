#pragma once
struct StartAndEnd
{
    //Структура для хранения указателей на начало и конец массива(или подмассива)
    int* start;
    int* end;

    StartAndEnd(int* start_p, int* end_p) : start(start_p), end(end_p) {}

    //Метод возвращает колчество элементов между началом и концом
    int numberElementsBetween();

};
//Получить строку матрицы
StartAndEnd getRow(int* startMatrix, int rowNumber, int rowLength);
//Получить столбец матрицы
StartAndEnd getColumn(int* startMatrix, int columnNumber, int columnLength);
//Получить главную диагональ матрицы 
StartAndEnd getMainDiagonal(int* startMatrix, int size);
//Получить побочную  диагональ матрицы 
StartAndEnd getSecondaryDiagonal(int* startMatrix, int size);
//Получить верхне-треугольную матрицу
StartAndEnd getUpperTriangle(int* startMatrix, int size);
//Получить нижне-треугольную матрицу
StartAndEnd getLowerTriangle(int* startMatrix, int size);
//Инициализировать матрицу
StartAndEnd initializeMatrix(int* matrix, int matrixSize);

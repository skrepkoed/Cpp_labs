#pragma once
struct StartAndEnd
{
    //��������� ��� �������� ���������� �� ������ � ����� �������(��� ����������)
    int* start;
    int* end;

    StartAndEnd(int* start_p, int* end_p) : start(start_p), end(end_p) {}

    //����� ���������� ��������� ��������� ����� ������� � ������
    int numberElementsBetween();

};
//�������� ������ �������
StartAndEnd getRow(int* startMatrix, int rowNumber, int rowLength);
//�������� ������� �������
StartAndEnd getColumn(int* startMatrix, int columnNumber, int columnLength);
//�������� ������� ��������� ������� 
StartAndEnd getMainDiagonal(int* startMatrix, int size);
//�������� ��������  ��������� ������� 
StartAndEnd getSecondaryDiagonal(int* startMatrix, int size);
//�������� ������-����������� �������
StartAndEnd getUpperTriangle(int* startMatrix, int size);
//�������� �����-����������� �������
StartAndEnd getLowerTriangle(int* startMatrix, int size);
//���������������� �������
StartAndEnd initializeMatrix(int* matrix, int matrixSize);

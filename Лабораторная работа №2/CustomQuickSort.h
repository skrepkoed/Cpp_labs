#pragma once
#include "StartAndEnd.h"
class CustomQuickSort
{
  public:
    StartAndEnd quickSort(int* start, int* end);//������� ����������
  private:
    void swap(int* ptr1, int* ptr2);//����� ���������
    int* partition(int* start, int* end, int* pivot);//��������� ������� �� ����������
};




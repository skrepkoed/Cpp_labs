#pragma once
#include "StartAndEnd.h"
class CustomQuickSort
{
  public:
    StartAndEnd quickSort(int* start, int* end);//быстрая сортировка
  private:
    void swap(int* ptr1, int* ptr2);//обмен элементов
    int* partition(int* start, int* end, int* pivot);//раздление массива на подмассивы
};




#include "CustomQuickSort.h"
#include <cstddef>
#include<iostream>


StartAndEnd CustomQuickSort::quickSort(int* start, int* end) {
    int half = (end - start) / 2;
    int* base_element_pointer = start + half;
    if (start < end)
    {
        int* p = partition(start, end, base_element_pointer);
        quickSort(start, p);//рекурсивный вызов быстрой сортировки
        quickSort(p + 1, end);
    }
    StartAndEnd startAndEnd(start,end);
    return startAndEnd;
}


int* CustomQuickSort::partition(int* start, int* end, int* pivot) {
    int pivot_number = *pivot;//опорный элемент 
    while (true)
    {
        while (*start < pivot_number)
        {
            start += 1;
        };
        while (*end > pivot_number)
        {
            end -= 1;
        };
        if (start >= end)
        {
            return end;
        };
        swap(start, end);
        start += 1;
        end -= 1;
    }
}

void CustomQuickSort::swap(int* ptr1, int* ptr2) {
    int temp = *ptr1; // —охран€ем значение, на которое указывает ptr1
    *ptr1 = *ptr2;    // ѕрисваиваем значение, на которое указывает ptr2, ptr1
    *ptr2 = temp;     // ѕрисваиваем сохраненное значение ptr2
}












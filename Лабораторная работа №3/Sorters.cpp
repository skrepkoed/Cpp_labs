#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "MinmaxSort.h"
using namespace std;
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{
    int arr[] = { 5,2,11,7,8,9 };
    int s = std::end(arr) - std::begin(arr);
    //Сортировка пузырьком:
    //BubbleSort::bubbleSort(arr,s);
    // Быстрая сортировка:
    //QuickSort::quickSort(begin(arr),end(arr)-1);
    //Сортировка методом минимакс:
    MinmaxSort::minmaxsort(arr, s);
    printArray(arr, s);
}
#include <iostream>
#include "Money.h"
#include "TStack.h"
#include "Train.h"
#include<random>

using namespace std;
template<class T>

void bubbleSort(T array[], size_t size) {
    T tmp;
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = size - 1; i < j; j--) {
            if (array[j-1] > array[j])
            {
                tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }
        }
    }
}



template <class T>
T getMax(T t1, T t2) {
    return t1 > t2 ? t1 : t2;
}

template <class T>
T getMax(T t[], size_t size)  {
    T retVal = t[0];
    for (int i = 0; i < size; i++) {
        if (t[i]>retVal)
        {
            retVal = t[i];
        }
    }
    return retVal;
}

void sortTrainsWithDeadend(TStack<Train>& deadEnd, TStack<Train>& tstackIn, TStack<Train>& tstackOut) {

    while (!tstackIn.isEmpty())
    {
        Train t1 = tstackIn.pop();
        while (!deadEnd.isEmpty()) {
            Train t2 = deadEnd.pop();
            if (t1.getTrainNumber() > t2.getTrainNumber())
            {
              tstackOut.push(t2);
            }
            else {
                deadEnd.push(t2);
                break;
            }
        }
        deadEnd.push(t1);
        while (!tstackOut.isEmpty())
        {
            Train t = tstackOut.pop();
            deadEnd.push(t);
        }
    }
    while (!deadEnd.isEmpty())
    {
        tstackOut.push(deadEnd.pop());
    }

}

int main()
{
    //Демонстрация применения шаблонной функции bubbleSort на примере массива int и массива Money:
    int array_of_numbers[] = { 11,5,7,0,2,4 };
    bubbleSort(array_of_numbers, size(array_of_numbers));

    Money array_of_money[] = { Money(19, 10), Money(99,99),
    Money(99,95), Money(19,95)};
    bubbleSort(array_of_money, size(array_of_money));
    
    for (int number: array_of_numbers)
    {
        cout << number << endl;
    }

    for (Money money : array_of_money)
    {
        cout << money << endl;
    }
    //Демонстрация перегрузки шаблонной функции:
    int number1 = 5, number2 = 15;
    cout << "max int = " << getMax(number1, number2) << endl;
    cout << "max int in array= " << getMax(array_of_numbers, size(array_of_numbers)) <<endl;
    //Использование шаблонного класса TStack для решения задачи о сортировке железнодорожного состава с использованием тупика:
    const int Number_OF_TRAINS = 100;
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 10);

    TStack<Train> tstackIn(Number_OF_TRAINS);
    TStack<Train> tstackOut(Number_OF_TRAINS);
    TStack<Train> deadEnd(Number_OF_TRAINS);
    for (size_t i = 0; i < Number_OF_TRAINS; i++)
    {
        tstackIn.push(*(new Train(dis(gen))));
    }
    sortTrainsWithDeadend(deadEnd, tstackIn, tstackOut);

    for (size_t i = 0; i < Number_OF_TRAINS; i++)
    {
        cout << tstackOut.item[i].getTrainNumber() << endl;
    }


   
   
    


}





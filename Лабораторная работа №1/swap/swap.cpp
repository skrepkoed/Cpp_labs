#include <iostream>

void swap1(int& x, int& y){
    // „ерез ссылки на переменные
    int t=x;
    x=y;
    y=t;
}

void swap2(int* x, int* y){
    //„ерез указатели на переменные
    int t = *x;
    *x = *y;
    *y=t; 
}

void swap3(int x, int y){
    //через переменные по значению
    int t=x;
    x=y;
    y=t;
}

int main(){
    //Ќаписать программукотора€ мен€ет местами значени€ двух переменных
    int x1=1;
    int y1=2;
    
    int* x2= &x1;
    int* y2= &y1;

    int x3=1;
    int y3=2;
    
    swap1(x1, y1);
    std::cout << "x: "<< x1 << " y: " << y1<< std::endl;

    swap2(x2, y2);
    std::cout << "x: "<< *x2 << " y: " << *y2<< std::endl;

    swap3(x3, y3);
    std::cout << "x: "<< x3 << " y: " << y3<< std::endl;
}
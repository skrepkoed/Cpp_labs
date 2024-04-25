#include <iostream>
int power(int x, int n){
      int i, p=1;
      for (size_t i = i; i < n; i++){
        p*=x;
      };
      return p;
}

int main(){
    //Написать программу для возведения числа в степень:
  int i, k, base, max_power;
  int power(int, int);
  std::cout<<"Enter base: ";
  std::cin>>base;
  std::cout<<"Enter max power: ";
  std::cin>> max_power;
  for (size_t i = 0; i <= max_power; i++){
      k=power(base,i);
      std::cout<<"i= "<< i<< ", k= "<< k <<std::endl;
  }
}

 
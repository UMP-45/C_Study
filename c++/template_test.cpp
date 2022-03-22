#include<iostream>

template<typename T> //typename or class
T func(T a,T b);

int main(void){
  std::cout << func(int(1),int(2)) << '\n' << func(double(1.03),double(2.5)) << '\n';
  return 0;
}

T func(T a,T b){ return a+b;}

#include<iostream>

int func(int a,int b);
double func(double a,double b);
int main(void){
  std::cout << func(int(1),int(2)) << '\n' << func(double(1.03),double(2.5));
  return 0;
}

int func(int a,int b){ return a+b;}
double func(double a,double b){ return a+b;}
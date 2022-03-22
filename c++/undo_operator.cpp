#include<iostream>

class complex{
      double re,im;
     public: 
        // complex(double r) : re(r), im(0){}
           complex(double r = 0, double i = 0) : re(r), im(i){}    //初始化
           complex& operator += (complex a){
                re += a.re;
                im += a.im;
                return *this;
           }
           complex& operator += (double a){
                re += a;
                return *this;
           }
           double real() const {return re;}   //检查虚实部
           double imag() const {return im;}
//...     
};
complex operator+(complex a, complex b)
{
     complex r = a;
     return r += b;    //调用 complex::operator += (complex)
}
complex operator+(complex a, double b)
{
     complex r = a;
     return r += b;    //调用 complex::operator += (double)
}
complex operator+(double a, complex b)
{
     complex r = b;
     return r += a;    //调用 complex::operator += (double)
}
inline bool operator == (complex a, complex b)
{
      return a.real() == b.real() && a.imag() == b.imag();
}
using std::cout;
int main(void)
{
  //complex x(2);
    return 0;
}

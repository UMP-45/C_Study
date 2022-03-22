//Trace
//#include<stdio>
#include<string>
#include<sstream>

template<typename T>
class Trace{
 public:
  //void print(char *s) {printf("%s",s);}
  T print(T s){
    std::stringstream buff;
    buff << s;
    return s; }
}; //ostringstream

#include<iostream>

int main (void)
{
  Trace<std::string> t;
  //t.print("begin main()\n");//函数的主体
  //t.print("end main()\n");
  std::cout << t.print("begin main()\n") << "\n";
}

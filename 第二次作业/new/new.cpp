#include <iostream>
#include <iterator>

template <typename T>
class node{
 private:
  T data;
  T* P = &data;
 public:
  T get_data(){
   T temp = data;
   return temp;
  }

  T* get_p(){
   T* temp = &data; 
   return *temp;
  }

  auto get_next(){
   //auto temp = *P;
   //return *temp;
   return &*P;
  }

  T* add(T in){
    node<T> elem;
    elem.data = in;
    elem.P = get_p();
    T* head = elem.get_p();
  return *head;
  }
};

using std::cin;
using std::cout;
int main(void)
{
  node<int> mylist;
  int* head = mylist.get_p();
  int x;
  while( cin >> x){
    mylist.add(x);
 // T* head = mylist.reverse();
  }
  while( mylist.get_next() )
    ;
}
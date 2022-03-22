#include <iostream>
     
using std::cin;
using std::cout;
template<typename T>
class node{
 private:
  T data = {};
  T* p = &data;
  unsigned conut = 0;
  T* behind = p + 1;
  T* start;
 public:

  T cin_data(){
    T temp;
    cin >> temp;
    data = temp;
  }

  T get_data(){
    T temp = data;
    return temp;
  };

  T* get_p(){
    T* temp = p;
    return *temp;
  };

  T* cin_p(T* temp){
    p = temp;
  }

  T add( T v ){
    node elem;
    elem.data = cin_data();
    T* temp = elem.get_p();
    p = elem.cin_p(*temp);
  }

  T* creat();
  T print(T*);
  T delmax(T*);
};
  

  for( auto i=mylist.start(); i != mylist.behind(); ++i);
//node<T>::get_p
int main(void){
  //std::vector<node> mylist;
  node<int> mylist;
  T* head = mylist.creat();
  print(*head)
  delmax(*head)
  print(*head)
  //while( cin >> mylist.add() )
  //for( auto i = ves.begin(); i != ves.end(); ++i ) std::cout << *i;
  mylist.add(3);
  mylist.objadd(node<int>(3));
  node(){}
  return 0;}


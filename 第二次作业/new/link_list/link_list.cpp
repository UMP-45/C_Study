template <typename N>
class node{
 public:
  N data, *next;
  unsigned int count = 0;
};

template <typename T>
class link_list{
 private:
  node<T> list;
  T *head = list.next;
  T *tail = list.next;   
 public:
  T *begin();
  T *end();
  void change_end(T *ptr);
  bool empty();
  void insert(T *ptr,T elem);
};

template <typename T>
T *link_list<T>::begin(){
  T *cptr = head; 
  return cptr;
}

template <typename T>
T *link_list<T>::end(){
  T *cptr = tail; 
  return cptr;
}

template <typename T>
void link_list<T>::change_end(T *ptr){
  tail = ptr;
} 
template <typename T> bool link_list<T>::empty(){ return begin() == end();}

template <typename T>
void link_list<T>::insert(T *ptr,N value){
  node<T> temp;
  temp.data = elem;
  temp.next = 
  change_end(elem.ptr);
}
#include <iostream>

int main(int argc, char *argv[]){
  link_list<int> obj;

  using std::cout;
  cout << *obj.begin() << "\n" << obj.empty() << "\n" ;
  
//list.push(iter,)
  return 0;
}

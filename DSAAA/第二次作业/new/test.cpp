#include <iostream>

class node{
 typedef int I;
 private:

 public:
  I *begin();
  I *end();
  int data;
  node *next;

  node *creat();        //创建单链表
  void printL(node *head);  //打印单链表
  //void delmax(node *head); //单链表删除最大元素
  void clear(node *head);     //清空链表
  bool insert(node *head); //插入元素
  bool remove(int num,int &item); //替换指定位置节点的值
  bool IsEmpty() const; //判断链表是否为空
};

int main(void){
  node list;
  using std::cout;
  cout << "Please input the data for single linker :" << "\n";
  node *head = list.creat();
  list.printL(head);
  cout << "\n";
  //list.delmax(head);
  cout << "Single Linker data is: " << "\n";
  list.printL(head); 
  cout << "\n";
  list.del(head);
return 0;}

node *node::creat(){
  node *head, *p;
  head = new node;
  p = head;
  int x;
  while ( std::cin >> x ){
    node *s = new node;
    s -> data = x;
    p -> next = s;
    p = s;
  }
  //head = head -> next;
  p -> next = NULL;
  return head;
}

void node::printL(node *head){
  node *p = head;
  while (p -> next != NULL){
    std::cout << p -> next -> data << " ";
    p = p->next;
  }
}

/* node *node::delmax(node *head){
  node *p1, *p2;
  p2 = head -> next; 
  p1 = head; //p1为最大值
  while(p2 -> next != NULL){
    if( (p1 -> next -> data) < (p2 -> next -> data) )//if((p2 -> next -> data) > (p1 -> next -> data)){
      p1 = p2;
    p2 = p2 -> next;
    }
  p2 = p1 -> next;
  p1 -> next = p2 -> next;
  delete p1;
  return head;
} */

void node::clear(node *head){
  node *p = null;
  while(head != NULL){
    p = head -> next;
    head -> next = p -> next;
    delete p;
  }
}

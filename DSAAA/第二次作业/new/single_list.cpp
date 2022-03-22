#include <iostream>

struct node{
  int data;
  node *next;
};
typedef struct node node, *list;

node *creat(void);  //创建单链表
void printL(node *head);  //打印单链表
node *delmax(node *head);  //单链表删除最大元素
void clear(node *head);  //清空链表

int main(void){   
  std::cout << "Please input the data for single linker :" << "\n";
  node *head = creat();
  std::cout << "Single Linker data is: " << "\n";
  printL(head);
  std::cout << "\n";
  delmax(head);
  std::cout << "after deleting: " << "\n";
  printL(head); 
  std::cout << "\n";
  clear(head);
  return 0;
}

node *creat(void){ 
  node *head, *p;
  head = new node; 
  p = head ;
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

void printL(node *head){ 
  node *p = head;
  while (p -> next != NULL){
	std::cout << p -> next -> data << " ";
	p = p->next;
	}
}

node *delmax(node *head){  
  node *ptr_max, *ptr_cur;
  ptr_cur = head -> next; 
  ptr_max = head; //ptr_max并未改变，改变的头节点的下一个节点  
  while(ptr_cur -> next != NULL){
    if( (ptr_cur -> next -> data) > (ptr_max -> next -> data) )
      ptr_max = ptr_cur;
    ptr_cur = ptr_cur -> next;
  }
  ptr_cur = ptr_max -> next;
  ptr_max -> next = ptr_cur -> next;
  delete ptr_cur;
  return ptr_max;
}

void clear(node *head){  //清空链表
  node *p = NULL;
  while(head -> next!= NULL){
    p = head -> next;
    head -> next = p -> next;
    delete p;
  }
}



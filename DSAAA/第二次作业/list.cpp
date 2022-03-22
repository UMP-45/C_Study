#include<iostream>

struct LNode{
  int data;
  struct LNode *next;
}; //LNode, *Linklist

int findmax(Linklist L){}
int main(void)
{
  Linklist L;

}

int findmax(Linklist L)
{
  if(!L -> next) return;
  Ptrmax = L; //p1
  Ptrcur = L -> next; //p2
  while(Ptrcur -> next ){
    if(Ptrcur -> next -> data > Ptrmax -> next -> data )
      Ptrmax = Ptrcur;
      Ptrcur = Ptrcur -> next;
  }
  Ptrcur = Ptrmax -> next;
  Ptrmax -> next = Ptrcur -> next;
  free(Ptrcur);
}
node *del(node *head, int num){
	node *p1, *p2;
	p2 = new node;
	p1 = head;
	while (num != p1->data && p1->next != NULL){
		p2 = p1;
		p1 = p1->next;// p1和p2位置: p2->p1		
	}
	if (num == p1->data){
		if (p1 == head){// 删除头节点
			head = p1->next;
			delete p1;
		}
		else{
			p2->next = p1->next;
			delete p1;
		}
	}
	else{
		cout << num << " could not been found in the current single linker!" << endl;
	}
	return head;
}
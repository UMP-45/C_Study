#include<iostream>
//链表定义
struct Info{
  string name;
  int id;
};
struct Node{
  Info val;
  Node *next;
  Node(Info x):val(x),next(NULL) {}
};
 
class LinkList{
public:
  //构造函数
  LinkList();	
  //在链表头部插入结点
  void InsertHead(Info val);
  //插入结点
  void Insert(Info val,int pos);
  //删除结点
  void Remove(Info val);
  //得到链表长度
  int Length();
  //链表反序
  void Reverse();
  //查找结点位置
  int Find(Info val);
  //打印链表
  void Print();
  //析构函数
  ~LinkList();
private:
	Node *head;
	int length;
};

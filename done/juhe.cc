//聚合练习
#include <iostream>
#include <cstring>
using namespace std;

class studentID

{
  long value;
public:
  studentID(long id = 0 ){
  value = id ;
  cout << "赋给学生的学号: "  << value << endl;}
  ~studentID(){
  cout << "删除学号： " << value << endl;}
};

class student
{
private:
  studentID id;char name[20];
public:
  student(char sname[] = "no name",long sid = 0):id(sid){ 
  strcpy(name,sname);
  cout << "学生名：" << name <<endl;}
  ~student(){
  cout << "删除学生名: " << name <<endl;}
};

int main(){
	student ss("宋博博",111111111);
	return 0;
}


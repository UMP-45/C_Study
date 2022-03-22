#include<iostream>
#include<string>
#include <list>
#include<algorithm>
using std::for_each;
using std::list;
using std::string;
class Employee{
      string first_name, famliy_name;
      char middle_initial;
      short department;
public:
      Employee(const string&name, int dept);
      virtual void print() const;
      string full_name() const
             {return first_name + ' ' + middle_initial + ' ' + famliy_name;}
};

class Manager: public Employee{
      list<Employee*> group;   // 所管理的人员
      short level;
public:
      Manager(const string& n, int d, int lvl);
      void print() const;
};

using std::cout;
Employee::Employee(const string& n, int d)
     :famliy_name(n),department(d)          //初始化成员
{
//...
}
Manager::Manager(const string& n, int d, int lvl)
     :Employee(n,d),    //初始化基类
      level(lvl)        //初始化成员
{
//...
}      

void Employee::print() const
{
     cout << famliy_name << '\t' << department << '\n';
//...
}

//using std::string Employee::full_name() const;
void Manager::print() const
{
     Employee::print();
     cout << "\tlevel" << level << '\n';
     cout << "name is " << full_name() << '\n';
//...
}

using std::mem_fun;
void print_list(const list<Employee*>&s)
{
     for_each(s.begin(), s.end(), mem_fun(&Employee::print));
}
/* void Manager::print() const              //错误，派生类成员无法访问基类的私用成员
{
     cout << "name is " << famliy_name << '\n';
//...
} */

int main(void):
{
    Employee e("Brown",1234);
    Manager m("smith",1234,2);
    list<Employee*>empl;
    empl.push_front(&e);
    empl.push_front(&m);
    print_list(empl);
    return 0;
}


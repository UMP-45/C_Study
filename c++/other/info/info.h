#ifndef _PERSON_H_ 
#define _PERSON_H_

#include<iostream>
#include<vector>
#include<string>

using std::string;
class Info{
private:
     int id;
     string name, tel, addr;
public:
     Info();
     ~Info();
     static int count; //记录通讯录中的人数
     int GetId();
     void SetName();
     string GetName() const;
     void SetTel();
     string GetTel() const;
     void SetAddr();
     string GetAddr() const;
     void choose();
     void insert();
     void show();
     void search();
     void interface();
     void delete_info();
     void exit_info();
     void modify();
};

#endif
/* using std::cout;

int main(void)
{
    return 0;
} */

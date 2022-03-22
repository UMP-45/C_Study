#include<iostream>
#include<string>
#include<vector>

using std::string;
class phonebook{
     
private:
     int id = 0;
     string name, number, address; 
public:
     void insert();   //增
     void erase();    //删
     void modify();   //改
     void search();   //差
     void load();     //加载通讯录
     void write();    //写入通讯录
};

using std::cin;
using std::cout;
void phonebook::insert(){
     cout << "请输入名称:" << ' ';
     cin >> name;
     cout << "请输入号码:" << ' ';
     cin >> number;
     cout << "请输入地址:" << ' ';
     cin >> address;
}
void phonebook::erase(){
     
}
int main(void)
{
    return 0;
}

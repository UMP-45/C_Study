#include "info.h"

int Info::GetId(){
    return id;
}

using std::cout;
using std::cin;
using std::vector;
using std::endl;

void Info::SetName(){
    cout << "姓名: ";
    cin >> name;
}

string Info::GetName() const{
    string tmp = name;
    return tmp;
}

void Info::SetTel(){
    cout << "电话: ";
    cin >> tel;
}

string Info::GetTel() const{
    string tmp = tel;
    return tel;
}

void Info::SetAddr(){
    cout << "地址: ";
    cin >> addr;
}

string Info::GetAddr() const{
    string tmp = addr;
    return tmp;
}

Info::Info(){}
Info::~Info(){}

vector<Info> per;   //通讯录
int Info::count = 0;

void Info::insert()
{
    Info tmp;
    vector<Info>::iterator it;
loop:
    ++count;
    cout << "ID: " << count << endl;
    tmp.SetName();
    for(it = per.begin(); it != per.end(); ++it)
    {
        if(!((it -> GetName()).compare(tmp.GetName())))  
        {
            cout << "与已有联系人重名，请重新输入。"  << endl;
            --count;
            goto loop; 
        }    
        tmp.SetTel();
        tmp.SetAddr();
        tmp.id = count;
        per.push_back(tmp);
        cout << "是否继续添加联系人 y/n：";
        char ch;
        cin >> ch;
        if(ch == 'y' and ch == 'Y') goto loop;
    }
}

void Info::show()
{
    vector<Info>::iterator it;
    if(per.empty()) cout << "通讯录暂无联系人！" << endl; 
    else for(it = per.begin(); it != per.end(); ++it)
    {
        cout << "ID：" << it ->GetId() << endl;
        cout << "姓名：" << it ->GetName() << endl;
        cout << "地址：" << it ->GetAddr() << endl;
    }
    cout << "请按任意键退出" << endl;
    char ch;
    cin >> ch;
}

void Info::search()
{
    vector<Info>::iterator it;
    if(per.empty()) cout << "通讯录暂无联系人！" << endl;
    else search_loop:
        int tp = 0; //查询方式选择位
        int num = 0; //查询的ID
        string tn; //查询的姓名
        int flag = 0; //查询成功与否标志位
        cout << "查询方式：1.ID 2.姓名" << endl;
        cin >> tp;
        if(tp == 1)
        {
            cout << "请输入查找的ID："；
            cin >> num;
            for(it = per.begin(); it != per.end(); ++it) 
            {
				if(it -> GetId() == num)
			    {
                    flag = 1;
					cout << "你要找的联系人为：" << endl;
					cout << "ID：" << it -> GetID() << endl;
                    cout << "姓名：" << it -> GetName() << endl;
                    cout << "电话：" << it -> GetTel() << endl;
                    cout << "地址：" << it -> GetAddr() << endl;
				}
			}
		}
		else if(tp == 2)
        {
            cout << "请输入查找的姓名：";
			cin >> tn;
			for(it = per.begin(); it != per.end(); ++it)
            {
				if



			}

		}
}


int main(void)
{
    return 0;
}

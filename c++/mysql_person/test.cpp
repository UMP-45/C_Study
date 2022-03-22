#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::string;

class phonebook{
private:
     string name;
public:
     template <typename T> T insert();
     template <typename T> T erase();
     template <typename T> T modify();
     template <typename T> T search();
//     string sort(string name) {};
};
using std::cout;
using std::cin;
using std::vector;
template <typename T>
phonebook::insert(vector){
     int i = 0;
     phonebook phone_book[i];
     cout << "请输入名称:" << ' ';
     cin >> phone_book[i].name;
     cout << "请输入号码:" << ' ';
     cin >> phone_book[i].phone_number;
     cout << "请输入地址:" << ' ';
     cin >> phone_book[i].address;
     vector.push_back(phone_book[i])
     ++i;
};
template <typename T> 
phonebook::earse(vector){
     for(int i = 0; i < size(vector); ++i)
         if(vector[i].name == name)
             vector.erase(vector.begin() + i)
};
template <typename T> 
T phonebook::modify(vector){ 
};


using std::cout;

int main(void)
{
    return 0;
}

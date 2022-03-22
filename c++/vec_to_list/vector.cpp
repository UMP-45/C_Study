#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cout;

struct Entry{
       string name;
       int number;
};

vector<Entry> phone_book(1000);
//vector<int> phone_book;

void print_entry(int i) //简单使用，就像数组一样
{ 
    cout << phone_book[i].name << ' ' << phone_book[i].number << '\n';
}
void add_entries(int n) //将其规模增加n
{
    phone_book.resize(phone_book.size() + n);
}
int main(void){
    phone_book[0].name = "python";
    phone_book[0].number = 3;
    phone_book[1].name = "C_book";
    phone_book[1].number = 4;
    phone_book[2].name = "C++";
    phone_book[2].number = 5;
    for(auto i = 0; i != 3; ++i) print_entry(i);
    return 0;
}

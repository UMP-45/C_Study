#include<iostream>
#include<string>
//#include<iterator>
#include<algorithm>
using std::string;
using std::find;
using std::cout;
int count(const string& s,char c)
{
    int n = 0;
    string::const_iterator i = find(s.begin(),s.end(),c);
    while(i != s.end()){
         ++n;
         i = find(i+1, s.end(),c);
    }
    return n;
}
/* void f()
{
     string m = "Mary had a little lamb";
     int a_count = count(m,'a');
} */
int main(void){
    string m = "Mary had a little lamb";
    int a_count = count(m,'a');
    cout << a_count << '\n';
    return 0;
}
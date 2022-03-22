//p90
#include<iostream>
#include<string>
#include<vector>
using std::string;

struct Pair{
      string name;
      double val;
};
using std::vector;
using std::pair;
vector<Pair>pairs;
double& value(const string& s) //维护pair的一个集合；检索s，如果找到就返回其值；否则做一个新pair并返回默认值0
{
      Pair p = {s,0};
      for(int i = 0;pairs.size() > i; i++)
           if (s == pairs[i].name) return pairs[i].val;
      return pairs[pairs.size() - 1].val;
}
int main(void)
{
    string buf;
    using std::cin;
    using std::cout;
    while (cin>>buf) value(buf)++;
    for(vector<Pair>::const_iterator p = pairs.begin(); p != pairs.end(); ++p)
        cout << p->name << ':' << p->val << '\n';
    return 0;
}

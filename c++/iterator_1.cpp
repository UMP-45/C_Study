#include<iostream>
#include<string>
#include<algorithm>
#include<list>
#include<vector>
#include<complex>

using std::cout;
using std::string;
using std::find;
using std::vector;
using std::list;
using std::complex;

/* int count(const string& s,char c)
{
    int n = 0;
    string::const_iterator i = find(s.begin(),s.end(),c);
    while(i != s.end()){
         ++n;
         i = find(i+1, s.end(),c);
    }
    return n;
} */
template<class C, class T>int count(const C& v,T val)
{
     typename C::const_iterator i =find(v.begin(), v.end(), val);
     int n = 0;
     while (i != v.end()){
          ++n;
          ++i;
          i = find(i, v.end(),val);
     }
     return n;
}

void f(  list<complex<double> >& lc,   vector<string>& vs, string s) // complex 有误
{
     int i1 = count(lc.begin(), lc.end(), complex<double>(1,3));
 //    int i1 = count(lc.begin(), lc.end(), 1);
     int i2 = count(vs.begin(), vs.end(), "Diogenes");
     int i3 = count(s.begin(), s.end(), 'x');
}

int main(void)
{
    return 0;
}

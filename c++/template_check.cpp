//p325
#include<iostream>
#include<vector>

using std::vector;
using std::string;
template<class T>void sort(vector<T>&); //声明

template<class T>void sort(vector<T>& v) //定义
{
     const size_t n = v.size();
     for(int gap = n/2; 0 < gap; gap /=2)
          for(int i = gap; i < n;  ++i)
               for(int j = i-gap; 0 <= j; j -= gap)
                    //交换v[j] 和v[j + gap] 
                    if(v[j+gap] < v[j]){  
                         T temp = v[j]; 
                         v[j] = v[j+gap];
                         v[j+gap] = temp;
                    }
              //    if(v[j+gap] < v[j]) swap(v[j],v[j+gap]); 
}

void f(vector<int>& vi, vector<string>& vs)
{
     sort(vi); //sort(vector<int>&)
     sort(vs); //sort(vector<string>&)
}



using std::cout;

int main(void)
{   
    return 0;
}

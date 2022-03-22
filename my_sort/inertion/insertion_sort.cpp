//-std=c++17 -static -m64 -Wall -Os
//输入的数应小于2^32

#include <iostream>
#include <vector>
#include <string>

using std::swap;
using std::vector;

template<typename T>
void insertion_sort(vector<T>& arr);

int main(int argc,const char *argv[]){
using std::cout;
using std::basic_string;
  vector<int> arr = {}; //or vector<char> arr;
  for(int i = 0; i < argc-1; ++i){
    int temp = std::stoi(argv[i+1]); //如果用stol，将char转换为long，则会变为负数
    arr.push_back(temp);
  }

  insertion_sort(arr);

  for(auto i : arr) cout << i << "  "; 
  cout << "\n";
  return 0;
}

template<typename T> 
void insertion_sort(vector<T>& arr){
  for(int i = 1; i < arr.size(); ++i){
    int temp = arr[i];
    int j = i - 1;
    while((j >= 0) && (temp < arr[j])){
      arr[j+1] = arr[j];
      --j;
    }
    arr[j+1] = temp;
  }
}


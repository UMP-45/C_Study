//-std=c++17 -static -m64 -Wall -Os
//输入的数应小于2^32

#include <iostream>
#include <vector>
#include <string>

  using std::swap;
  using std::vector;

template<typename T> 
void selection_sort(vector<T>& arr);

int main(int argc,const char *argv[]){
  using std::cout;
  using std::basic_string;
  vector<int> arr = {}; //or vector<char> arr;
  for(int i = 0; i < argc-1; ++i){
    int temp = std::stoi(argv[i+1]); //如果用stol，将char转换为long，则会变为负数
    arr.push_back(temp);
  }
  
  selection_sort(arr);
  for(auto i : arr) cout << i << "  "; 
  cout << "\n";
  
  return 0;
}
template<typename T> 
void selection_sort(vector<T>& arr) {
  for(int i = 0; i < arr.size() - 1; ++i){
    int min = i;
    for(int j = i + 1; j < arr.size(); ++j)
      if(arr[j] < arr[min])
        min = j;
    swap(arr[i], arr[min]);
    }
}
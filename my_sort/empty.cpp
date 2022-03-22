//-std=c++17 -static -m64 -Wall -Os
//输入的数应小于2^32

#include <iostream>
#include <vector>
#include <string>

  using std::swap;
  using std::vector;

int main(int argc,const char *argv[]){
  using std::cout;
  using std::basic_string;
  vector<int> arr = {}; //or vector<char> arr;
  for(int i = 0; i < argc-1; ++i){
    int temp = std::stoi(argv[i+1]); //如果用stol，将char转换为long，则会变为负数
    arr.push_back(temp);
  }



  for(auto i : arr) cout << i << "  "; 
  cout << "\n";

  return 0;
}
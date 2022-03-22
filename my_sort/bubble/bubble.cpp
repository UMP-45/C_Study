//-std=c++17 -static -m64 -Wall -Os
//输入的数应小于2^32

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::swap;

template<typename T>
void bubble(vector<T> &arr);

int main(int argc,const char *argv[]){
using std::cout;
using std::basic_string;

/*   vector<char*> arr = {};
  for(int i = 0; i < argc-1; ++i){
    arr.push_back(argv[i+1]);
    cout << arr[i] << "  ";
    cout << argv[i+1] << "  ";}
  cout << "\n"; */

  vector<int> arr = {}; //or vector<char> arr;
  for(int i = 0; i < argc-1; ++i){
    int temp = std::stoi(argv[i+1]); //如果用stol，将char转换为long，则会变为负数
    arr.push_back(temp);
  }

  bubble(arr);
/*   for(auto i : arr){     //nope!
    for(auto j : arr-1-i)
      if(j > j+1){
        swap(j,j+1);
    }
  } */
  //cout << arr.size() << "\n";
  for(auto i : arr) cout << i << "  ";
  cout << "\n";
  return 0;
}

template<typename T>
void bubble(vector<T> &arr){
 }
}

//-std=c++17 -static -m64 -Wall -Os
//-std=c++17 -static -m64 -Wall -Os
#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
  using std::cout;
  using std::swap;
  using std::vector;

  vector<int> arr = {6,5,7,2,9,4,3,1,8};
/*   for(int i = 1; i < argc; ++i){
    arr.push_back(*argv[i]);
    cout << argv[i] << "  ";}
  cout << "\n"; */
  
  for(auto i : arr) cout << i << "  ";
  cout << "\n";

  for(int i = 0; i < arr.size(); ++i)
    for(int j = 0; j < arr.size() - 1 -i; ++j)
      if(arr[j] > arr[j+1]){
        cout << "???" << "\n";
        swap(arr[j],arr[j+1]);}

 for(auto i : arr) cout << i << "  ";
 // for(auto i = arr.begin(); i != arr.end(); ++i) cout << *i << "\n"; //排序未运行
  cout << "\n";

}
//-std=c++17 -static -m64 -Wall -Os
#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
  using std::cout;
  using std::swap;
  using std::vector;

  vector<int>arr;
  for(int i = 1; i < argc; ++i){
    arr.push_back(i);
    cout << argv[i] << "  ";}
  cout << "\n";
  
  cout << "???" << "\n";

  for(auto i : arr) cout << i << "  ";
  cout << "\n";

  for(int i = 1; i < argc - 1; ++i)
    for(int j = 1; j < argc - 2 -i; ++j)
      if(arr[j] > arr[j+1])
        swap(arr[j],arr[j+1]);
  
/*   for(auto i : arr) cout << arr[i] << "  ";  //？？？第一位被忽略，最后一位越界
  cout << "\n"; */
}

/*     {char *temp = argv[j+1];
        argv[j+1] = argv[j];
        argv[j] = temp;} */

/*   for(int i = 0; i < argc - 1; ++i)
    cout << arr[i] << "  ";  */



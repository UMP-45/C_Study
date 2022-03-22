//-std=c++17 -static -m64 -Wall -Os
#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[]){
  using std::cout;
  using std::swap;
  using std::vector;
  using std::basic_string;
  vector<int> arr = {}; //or vector<char> arr;

/*   for(int i = 0; i < argc-1; ++i){
    arr.push_back(argv[i+1]);
    cout << arr[i] << "  ";
    cout << argv[i+1] << "  ";}
  cout << "\n"; */
  for(int i = 0; i < argc-1; ++i){
    int temp = std::stoi(argv[i+1]);
    arr.push_back(temp);
    cout << arr[i] << "  ";
    cout << argv[i+1] << "  ";}
  cout << "\n";

  for(auto i : arr) cout << i << "  "; 
  cout << "\n";

  for(auto i : arr) cout << i << "  "; 
  cout << "\n";
}

  



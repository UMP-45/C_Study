#include <iostream>
#include <vector>

int main(void){
  using std::vector;
  using std::swap;
  using std::cout;
  vector<int> arr;
  arr.push_back(7);
  arr.push_back(8);
  for(auto n : arr) cout << n << "\n";
  swap(arr[0],arr[1]);
  for(auto n : arr) cout << n << "\n";
}

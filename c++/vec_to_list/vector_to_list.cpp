//
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main(void){  
  using std::vector;
  vector<int> v = {0, 1, 1, 2, 3, 5, 8, 13, 21 }; //{ int x; while(std::cin >> x) v.push_back(x); }
  using std::list;
  list<int> l;

  for(auto n : v) l.push_back(n);

  v.clear();
  
  for(auto n : l) if(n % 2 ==0) v.push_back(n);

  using std::cout;
  for(auto n : v) cout << n << " ";
  cout << "\n";

  for(int n : l) cout << n << " ";
  cout << "\n";

  //for(auto n : l) v.insert(v.begin() + v.size()/2, n);
  for(auto i = v.begin() + v.size()/2; i != v.end(); ++i){
    for(auto n : l){
      v.insert(i,n);}
  }

  for(auto n : v) cout << n << " ";
  cout << "\n";

return 0; }

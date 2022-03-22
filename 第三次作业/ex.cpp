//
#include <iostream>
#include <iomanip>

int main(int argc, char *argv[]){
  using std::cout;

  for(int i = 0; i !=7; ++i){
    cout << "\n";
    for(int j = 0; j != i; ++j) //cout << std::setw(7) << "#";
      cout << "#";
  }
  cout << "\n";
  return 0;
}

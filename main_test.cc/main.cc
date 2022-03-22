//
#include <iostream>

using namespace std;

class Ctest{
 private:
  static int count;
 public:
  Ctest(){
   ++count;
   cout << "数量对象= " << count << '\n';
  }

  ~Ctest(){
   --count;
   cout << "数量对象= " << count << '\n';
  }
};

int Ctest :: count = 0;

int main(void){
  Ctest a[5];
  return 0;
}

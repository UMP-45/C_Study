#include <iostream>
#include <vector>

int main(void)
{
  std::vector<int> list = {1,2,3};
  for(int i = 0;i < list.size() ; ++i)
  {
    std::cout << &list[i] << std::endl;
  }
}

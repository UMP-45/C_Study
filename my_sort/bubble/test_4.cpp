#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
  for(int i = 1; i < argc - 1; ++i){
    int temp = *argv[i];
    std::cout << temp << "  ";}
  return 0;
}
//
#include<iostream>
#include"done.hh"

int main(void){
  mytime time; // std::cout << time.get_start() << "\n";

  for( auto i = 0; i < 99999; ++i)
    for( auto j = 0; j < 99999; ++j) int n = i*j;

  //std::cout << time.get_end() << "\n";
  //size_t cost = end - start;
  std::cout << time.count() << "\n";
  return 0;
}

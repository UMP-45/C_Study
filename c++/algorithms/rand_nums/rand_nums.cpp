//-std=c++17 -static -m64 -Wall -Os

#include <boost/random.hpp>
#include <iostream>

int main(int argc,char *argv[])
{
  boost::mt19937 gen; //伪随机数发生器（generator）
  boost::uniform_int<>dist(1,10000000);
  boost::variate_generator<boost::mt19937&, boost::uniform_int<>>die(gen,dist);
  
  for(auto i = 0; i < 1000; ++i)
  {
	std::cout << die() << "  ";  
  }
  std::cout << "\n";
}
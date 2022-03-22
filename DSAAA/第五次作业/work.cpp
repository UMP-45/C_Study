//-std=c++17 -static -m64 -Wall -Os
#include <random>
#include <iostream>
#include "mytime.hh"
#include "my_sort.hh"

using std::cout;

int main(int argc,char *argv[]){
  vector<int> num;
  
  srand(int(time(0)));
  for(auto n=0; n<10000; ++n){      
	int temp = (rand());
	num.push_back(temp);
  }
  
  my_sort my_sort;
  
  vector<int> num_bubble = num;
  mytime bubble_time;
  my_sort.bubble_sort(num_bubble);
  cout << "bubble_time: " << bubble_time.count() << "\n";

  vector<int> num_insertion = num;
  mytime insertion_time;
  my_sort.insertion_sort(num_insertion);
  cout << "insertion_time: " << insertion_time.count() << "\n";
  
  vector<int> num_selection = num;
  mytime selection_time;
  my_sort.selection_sort(num_selection);
  cout << "selection_time: " << selection_time.count() << "\n";
   
  vector<int> num_shell = num;
  mytime shell_time;
  my_sort.shell_sort(num_shell);
  cout << "shell_time: " << shell_time.count() << "\n";
  
  vector<int> num_quick = num;
  mytime quick_time;
  my_sort.quick_sort(num_quick, 0, num_quick.size());
  cout << "quick_time: " << quick_time.count() << "\n";
}


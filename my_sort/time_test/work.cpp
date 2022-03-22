/* 
-std=c++17 -static -m64 -Wall -Os
license in here
This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <https://unlicense.org> 
 */
#include <random>
#include <iostream>
#include "mytime.h"
#include "my_sort.h"

using std::cout;

int main(int argc,char *argv[]){
  vector<int> num;
  
  srand(int(time(0)));
  for(auto n=0; n<10000; ++n){      
	int temp = (rand());
	num.push_back(temp);
  }
  
  mine::my_sort my_sort;
  
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
  
  return 0;
}




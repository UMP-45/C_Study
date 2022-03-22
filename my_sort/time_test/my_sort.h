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

#ifndef _MY_SORT_HH_ 
#define _MY_SORT_HH_

#include <vector>
using std::swap;
using std::vector;

namespace mine{
class my_sort{
 private:
 public:
  void bubble_sort(vector<int>& arr);
  void selection_sort(vector<int>& arr);
  void insertion_sort(vector<int>& arr);
  void shell_sort(vector<int>& arr);
  void merge_sort();
  void quick_sort(vector<int>& A, int low, int high);
  int paritition1(vector<int>& A, int low, int high);
  void heap_sort();
  void counting_sort();
  void bucket_sort();
  void radix_sort();
};
}

//extern class mine::my_sort;  //只有使用模板(外部声明)才需要extern
#endif

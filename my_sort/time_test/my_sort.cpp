/*
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

#include "my_sort.h"

void mine::my_sort::bubble_sort(vector<int>& arr){
  int i=arr.size()-1;
  int last=0;
  bool flag=true;
  while(flag){
	flag=false;
    for(auto j=0; j<i ; ++j)
      if(arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
		last=j;
		flag=true;
      }
	i=last;
  } 
}

void mine::my_sort::insertion_sort(vector<int>& arr){
  for(auto i=1; i < arr.size(); ++i){
    int temp = arr[i];
    int j = i - 1;
    while((j >= 0) && (temp < arr[j])){
      arr[j+1] = arr[j];
      --j;
    }
    arr[j+1] = temp;
  }
}

void mine::my_sort::selection_sort(vector<int>& arr){
  for(auto i=0; i < arr.size() - 1; ++i){
    int min = i;
    for(auto j=i+1; j < arr.size(); ++j)
      if(arr[j] < arr[min])
        min = j;
    swap(arr[i], arr[min]);
  }
}

void mine::my_sort::shell_sort(vector<int>& arr){
  int h = 1;
  while(h < (arr.size()/3)){
    h = 3*h + 1;
  }
  while(h >= 1){
    for(auto i=h; i < arr.size(); ++i){
      for(auto j=i; j >= h && arr[j]<arr[j-h]; j-=h){
        swap(arr[j],arr[j-h]);
      }
    }
    h = h/3;
  }
}

int mine::my_sort::paritition1(vector<int>& A, int low, int high){
  int pivot = A[low];
  while (low<high){
    while (low<high && A[high]>=pivot){
      --high;
    }
    A[low] = A[high];
    while (low<high && A[low]<=pivot){
      ++low;
    }
    A[high] = A[low];
  }
  A[low] = pivot;
  return low;
}

void mine::my_sort::quick_sort(vector<int>& A, int low, int high){ //快排母函数
  if (low<high){
    int pivot = paritition1(A, low, high);
    quick_sort(A, low, pivot-1);
    quick_sort(A, pivot+1, high);
  }
} 

//class mine::my_sort;
//-std=c++17 -static -m64 -Wall -Os
//输入的数应小于2^32
#ifndef _MY_SORT_HH_ 
#define _MY_SORT_HH_

#include <vector>
using std::swap;
using std::vector;

class my_sort{
 private:
 public:
  void bubble_sort(vector<int>& arr);
  void selection_sort(vector<int>& arr);
  void insertion_sort(vector<int>& arr);
  void shell_sort(vector<int>& arr);
  void quick_sort(vector<int>& A, int low, int high);
  int paritition1(vector<int>& A, int low, int high);
/*  
  void heap_sort();
  void counting_sort();
  void bucket_sort();
  void radix_sort();
  void merge_sort(); 
*/
};

void my_sort::bubble_sort(vector<int>& arr){
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

void my_sort::insertion_sort(vector<int>& arr){
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

void my_sort::selection_sort(vector<int>& arr){
  for(auto i=0; i < arr.size() - 1; ++i){
    int min = i;
    for(auto j=i+1; j < arr.size(); ++j)
      if(arr[j] < arr[min])
        min = j;
    swap(arr[i], arr[min]);
  }
}

void my_sort::shell_sort(vector<int>& arr){
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

int my_sort::paritition1(vector<int>& A, int low, int high){
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

void my_sort::quick_sort(vector<int>& A, int low, int high){ //快排母函数
  if (low<high){
    int pivot = paritition1(A, low, high);
    quick_sort(A, low, pivot-1);
    quick_sort(A, pivot+1, high);
  }
} 

#endif
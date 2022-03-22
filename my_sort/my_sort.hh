//-std=c++17 -static -m64 -Wall -Os
//输入的数应小于2^32
#ifndef _MY_SORT_HH_ 
#define _MY_SORT_HH_

#include <vector>
#include <string>
using std::swap;
using std::vector;

template<typename T>
class my_sort{
 private:
  vector<T> arr;
 public:
  void add(T *argv);
  void show();
  void bubble_sort();
  void selection_sort();
  void insertion_sort();
  void shell_sort();
  void merge_sort();
  void quick_sort();
  void heap_sort();
  void counting_sort();
  void bucket_sort();
  void radix_sort();
};

template<typename T>
void my_sort::add(T *argv){
using std::basic_string;
  int temp = std::stoi(argv); //如果用stol，将char转换为long，则会变为负数
  arr.push_back(temp);
}

template<typename T>
void my_sort::bubble_sort(vector<T>& arr){
  for(int i = 0; i < arr.size(); ++i)
    for(int j = 0; j < arr.size() - 1 -i; ++j)
      if(arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
}

template<typename T>
void selection_sort(vector<T>& arr) {
  for(int i = 0; i < arr.size() - 1; ++i) {
    int min = i;
    for(int j = i + 1; j < arr.size(); ++j)
      if(arr[j] < arr[min])
        min = j;
    swap(arr[i], arr[min]);
    }
}

template<typename T> 
void insertion_sort(vector<T>& arr){
  for(int i = 1; i < arr.size(); ++i){
    int temp = arr[i];
    int j = i - 1;
    while((j >= 0) && (temp < arr[j])){
      arr[j+1] = arr[j];
      --j;
    }
    arr[j+1] = temp;
  }
}

template<typename T>
void shell_sort(vector<T>& arr){
  int h = 1;
  while(h < (arr.size()/3)){
    h = (3 * h) + 1;
  }
  while(h >= 1){
    for(int i = h; i < arr.size(); ++i){
      for(int j = i; j >= h && arr[j] < arr[j-h]; j -= h){
        swap(arr[j],arr[j-h]);
      }
    }
    h = h / 3;
  }
}
/* 
int paritition1(vector<int>& A, int low, int high){
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

void quick_sort(vector<int>& A, int low, int high){ //快排母函数
  if (low<high){
    int pivot = paritition1(A, low, high);
    quick_sort(A, low, pivot-1);
    quick_sort(A, pivot+1, high);
  }
}  */

#endif
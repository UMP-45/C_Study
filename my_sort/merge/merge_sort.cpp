//-std=c++17 -static -m64 -Wall -Os
//输入的数应小于2^32 (= 4294967296)
//自上而下的递归
//自下而上的迭代

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::swap;
using std::vector;
using std::min;
using std::max;
using std::numeric_limits;

template<typename T>
void merge_sort(vector<T>& arr, int front, int end);
template<typename T>
void merge(vector<T>& arr, int front, int mid, int end);

template<typename T>
vector<T> merge_sort(vector<T> arr);

int main(int argc,const char *argv[]){

using std::cout;
using std::basic_string;
  vector<int> arr = {}; //or vector<char> arr;
  for(int i = 0; i < argc-1; ++i){
    int temp = std::stoi(argv[i+1]); //如果用stol，将char转换为long，则会变为负数
    arr.push_back(temp);
  }
  int front = 0;
  int end = arr.size()-1;
  //merge_sort(arr, front, end);
  vector<int>  c = merge_sort(arr);
  for(auto i : c) cout << i << "  "; 
  cout << "\n";

  return 0;
}

template<typename T>
vector<T> merge_sort(vector<T> arr){  //迭代版
  vector<T> a = arr;
  vector<T> b(arr.size());
  for(int seg = 1; seg < arr.size(); ++seg){
    for(int start = 0; start < arr.size(); start = start + seg +seg){
      int low = start;
      int mid = std::min(start + seg, int(arr.size()));
      int high = std::min(start + seg + seg, int(arr.size()));
      int k = low;
      int start_1 = low, end_1 = mid;
      int start_2 = mid, end_2 = high;
      while(start_1 < end_1 && start_2 < end_2) b[++k] = a[start_1] < a[start_2] ? a[++start_1] : a[++start_2];
      while(start_1 < end_1) b[++k] = a[++start_1];
      while(start_2 < end_2) b[++k] = a[++start_2];
    }
    vector<T> temp = a;
    a = b; 
    b = temp;
  }
  if(a != arr){
    for(int i = 0; i < arr.size(); ++i)
      b[i] = a[i];
    b = a;
  }
  //delete[] b;
  return a;
}

// template<typename T>
// void merge(vector<T>& arr, int front, int mid, int end){   //递归版
  // vector<T> LeftSubArr(arr.begin() + front, arr.begin() + mid +1);
  // vector<T> RightSubArr(arr.begin() + mid + 1, arr.begin() + end +1);
  // int idxLeft = 0, idxRight = 0;
  // LeftSubArr.insert(LeftSubArr.end(),numeric_limits<T>::max());
  // RightSubArr.insert(RightSubArr.end(),numeric_limits<T>::max());
  // for(int i = front; i <= end; ++i){
    // if(LeftSubArr[idxLeft] < RightSubArr[idxRight]){
      // arr[i] = LeftSubArr[idxLeft];
      // ++idxLeft;
    // }
    // else{
      // arr[i] = RightSubArr[idxRight];
      // ++idxRight;
    // }
  // }
// }

// template<typename T>
// void merge_sort(vector<T>& arr, int front, int end){
  // if(front >= end) return;
  // int mid = (front + end) / 2;
  // merge_sort(arr, front, mid);
  // merge_sort(arr, mid+1, end);
  // merge(arr, front, mid, end);
// }

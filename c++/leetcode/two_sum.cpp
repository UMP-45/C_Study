// Source : https://oj.leetcode.com/problems/two-sum/
// Data   : 2020-07-24

//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

//示例：
//给定 nums = [2, 7, 11, 15], target = 9
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回 [0, 1]

#include <vector>
#include <map>
#include <iostream>

using namespace std;

class solution{
public:
    vector<int> twoSum(vector<int> &numbers,int target){
	    map<int, int> m; //unordered_map记录元素的hash值，unordered_map内部元素是无序的
        vector<int> result;
        for(auto i=0; i<numbers.size(); i++){
            //如果没有找到第二个数
            if (m.find(numbers[i])==m.end()){
                //存储第一个数的位置从而找到第二个数的值
                m[target - numbers[i]] = i;
            }else{
                //找到第二个数
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
                break;
            }
        }
        return result;
	}
};

int main(void){
	int num[4] = {2,11,7,15};
	solution method;
	vector<int> arr(num,num+4);
	vector<int> index;
	int target = 22;
	index = method.twoSum(arr,target);
	cout << "index[1] = " << index[0] << endl << "index[2] = " << index[1] << endl;
    return 0;
}
#include <random>
#include <iostream>
#include <vector>

int main()
{   
	std::vector<int> num;
    for (int n=0; n<10; ++n){
        // 用 dis 变换 gen 所生成的随机 unsigned int 到 [1, 6] 中的 int
        std::cout << rand() << ' ';
		int temp = (rand()%100);

	    num.push_back(temp);}
    for(int i = 0; i<10; ++i)
		std::cout << num[i] << " ";
    std::cout << '\n';
}
#include <iostream>
#include <vector>
#include <initializer_list>
 
template <class T>
struct S {
    std::vector<T> v;
    S(std::initializer_list<T> l) : v(l) {
         std::cout << "constructed with a " << l.size() << "-element list\n";
    }
    void append(std::initializer_list<T> l) {
        v.insert(v.end(), l.begin(), l.end());
    }
    std::pair<const T*, std::size_t> c_arr() const {
        return {&v[0], v.size()};  // 在 return 语句中复制列表初始化
                                   // 这不使用 std::initializer_list
    }
    int *findmax(S<T> s){
        int temp = 0;   
        int *P = NULL;
        for(auto n : s.v)
            if(v[n] > temp){
                temp = s.v[n];
                P = &s.v[n];
            }
        return P;     
    }
};

int main()
{
    S<int> s = {1, 2, 9, 4, 5}; // 复制初始化
    s.append({6, 7, 8});        // 函数调用中的列表初始化
    std::cout << "The vector size is now " << s.c_arr().second << " ints:\n";
    for (auto n : s.v)
        std::cout << &n << ' ';
    std::cout << '\n';
    std::cout << "The vector begin is now " << s.c_arr().first << "\n";
    std::cout << s.findmax(s) << std::endl;
}

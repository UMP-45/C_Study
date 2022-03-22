#include<iostream>
#include<boost/array.hpp>
#include<iterator>

//using std::size;
int main(void){
    using boost::array;
    array<array<int,4>,4> a= {};

    auto n = 0,m = 0,v = 0;

    using std::begin;
    using std::end;
    for(auto x = begin(a) + n; x != end(a); ++x)
        for(auto y = begin(*x) + m ; y != end(*x); ++y) *y = v++;

    using std::cout;
    using std::cin;
    cout << "enter n : ";
    cin >> n;
    if(n == 0){ 
      cout << "enter 3 n,m,v\n";
      cin >> n >> m >> *(begin(*(begin(a) + n )) + m) ;
    }
    n=0,m=0;
    for(auto x = begin(a) + n; x != end(a); ++x){
        for(auto y = begin(*x) + m ; y != end(*x); ++y) cout << *y << " ";
        cout << "\n" ; 
        if(n != 0 or m != 0) break;
    }
    return 0;
}
    //array<array<int,2>,2> b={(2,2),(2,2)};//={{1,2,3},{1,2,3}};
/*     
    for(auto p = begin(b);p not_eq end(b); ++p) ;
        for(auto &i : *p) cin >> i   ;
//for(int **i: b) cout << **i ;
for(auto x = begin(b);x not_eq end(b); ++x) 
    for(auto y = begin(*x);y not_eq end(*x) ; ++y) cout << *y << ' '; */

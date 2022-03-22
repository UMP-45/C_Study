#include <ctime>  
#include <iostream>  

int main(void)  
{  
using std::time;
    time_t start ,end ;  
    double cost;  
    time(&start);  
  
    time(&end);  
    cost=difftime(end,start);  
    printf("%f/n",cost);  
    return 0;  
}  
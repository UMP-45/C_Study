#include <stdio.h>
void main( )
{
  int f1(int);                      
	  int n;
  printf("请输入一个整数：");      
  scanf("%d",&n);                  
  if(f1(n))                       
	  printf("%d是一个素数:\n",n);
  else
     printf("%d不是一个素数:\n",n);
}
int f1(int n)               
{
	int i,m=1;
    	for (i=2;i<n/2 && m==1;i++)    
			if(n%i==0)
				m=0;
				return(m);          
}

 
#include <stdio.h>
void main()
{ 
	int add(int n);            
	int n,sum;
      printf("请输入一个正整数:");
      scanf("%d",&n);       
	  sum=add(n);
      printf("sum=%d\n",sum);   
}
   int add(int n)              
{
   int sum=0,i;
   for (i=1;i<=n;i++)        
		sum=sum+f1(i);
   return(sum);            
}
  int f1(int n)           
{	int m;
	if (n==0||n==1)
		m=1;
	else 
		m=n*f1(n-1);        
	return (m);            
}


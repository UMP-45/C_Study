#include<stdio.h>
void main ()
{
	int x,y;
	scanf("%d",&x);
	if(x<1)
		printf("x=%3d,y=x=%3d\n",x,x);
	else if(x<10)
		printf("x=%3d,y=2*x-1=%3d\n",x,y);
}
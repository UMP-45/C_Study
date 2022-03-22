#include<stdio.h>                                                        /*课本278页10.3*/
void main()                                                              /*主函数*/
{
	void input(int * );                                                  /*对函数的定义*/
	void max_min(int * );
	void output(int * );
	int a[10];	input(a);	max_min(a);	output(a);
}
void input(int a[])                                                     /*输入十个数的函数*/
{
	int i;
	printf("请输入十个数字中间用空格隔开\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
}
void max_min(int a[])                      
{
	int * max, * min, * p,t;
	max=min=a;
	for(p=a+1;p<a+10;p++)
		if( * p> * max)max=p;                                          /*将大数的地址给max*/
		else if( * p< * min)min=p;                                     /*将小数的地址给min*/
		t=a[0];a[0]= * min; * min=t;                                   /*将最小数与第一个数字交换*/
		t=a[9];a[9]= * max; * max=t;                                    /*将最大数与最后一个数字交换*/
}
void output(int a[])                                                   /*输出函数*/
{
	int * p;
	printf("新的数组顺序\n");
	for(p=a;p<a+10;p++)
		printf("%d ", * p);
	printf("\n");
}

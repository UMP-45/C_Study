#include<stdio.h>
void main ( )
{	
	int number[10];
	input(number);                      /* 调用输入10个数的函数 */
	max_min_value(number);             /* 调用交换函数 */
 output(number);                     /* 调用输出函数 */
}
input(int number[10])                   /* 输入10个数的函数 */
{
	int i;
	print(“Input 10 number:”);
	for (i=0;i<10;i++)
	scanf(“%d”,&number[i]);
}

max_min_value(int array[10])             /* 交换函数 */
{
	int * max,* min, * p, * array_end;
	array_end=array+10;
	max=min=array;
	for (p=array+1;p<array_end;p++)
	if (* p> * max) max=p;               /* 将大数地址赋给max */
	else if (* p<* min) min=p;             /* 将小数地址赋给min */
	* p=array[0];array[0]=* min;min=* p;       /*将最小数与第一个数交换*/
	* p=array[9];array[9]=* max;max=* p;       /*将最大数与第最后一个数交换*/
	return;
}

output(int array[10])                      /* 输出函数 */
{	
	int * p;
	printf(“Now,they are:”);
	for (p=array;p<=array+9;p++)
	printf(“%d”,* p);
}

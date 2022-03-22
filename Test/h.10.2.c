#include<stdio.h>                                                       /*课本278页10.2*/
#include<string.h>
void main()
{
	void swap(char * ,char * );                                         /*对被调swap函数的声明*/
	char str1[20],str2[20],str3[20];
	printf("请输入三个字符串\n");                                       /*输出函数*/
	gets(str1);                                                         /*输入函数*/
	gets(str2);
	gets(str3);
	if(strcmp(str1,str2)>0)
		swap(str1,str2);
	if(strcmp(str1,str3)>0)
		swap(str1,str3);
	if(strcmp(str2,str3)>0)
		swap(str2,str3);
	printf("由小到大顺序输出\n");
	printf("%s\n%s\n%s\n",str1,str2,str3);
}
void swap(char * p1,char * p2)                                           /*定义swap函数*/
{
	char p[20];
	strcpy(p,p1);strcpy(p1,p2);strcpy(p2,p);                             /*交换地址*/
}

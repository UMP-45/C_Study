#include<stdio.h>                                                       /*�α�278ҳ10.2*/
#include<string.h>
void main()
{
	void swap(char * ,char * );                                         /*�Ա���swap����������*/
	char str1[20],str2[20],str3[20];
	printf("�����������ַ���\n");                                       /*�������*/
	gets(str1);                                                         /*���뺯��*/
	gets(str2);
	gets(str3);
	if(strcmp(str1,str2)>0)
		swap(str1,str2);
	if(strcmp(str1,str3)>0)
		swap(str1,str3);
	if(strcmp(str2,str3)>0)
		swap(str2,str3);
	printf("��С����˳�����\n");
	printf("%s\n%s\n%s\n",str1,str2,str3);
}
void swap(char * p1,char * p2)                                           /*����swap����*/
{
	char p[20];
	strcpy(p,p1);strcpy(p1,p2);strcpy(p2,p);                             /*������ַ*/
}
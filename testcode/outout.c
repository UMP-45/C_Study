#include<stdio.h>                                                                           /*求解一元二次方程*/
#include<math.h>                                                                           
void main()                                                                                  /*主函数*/
{
	float a,b,c,disc,x1,x2,p,q;
	printf("请输入a,b,c,用逗号分离，其中a为二次项系数，b为一次项系数，c为常数项\n");         /*输出函数*/
	scanf("%f,%f,%f",&a,&b,&c);                                                              /*输入函数*/
	printf("方程");
	if(fabs(a)<=1e-6)
		printf("不是一个一元二次方程\n");
	else
	{
		disc=b*b-4*a*c;
		if(fabs(disc)<=1e-6)
			printf("有两个相同实数根:%8.4f\n",-b/(2*a));
		else
			if(disc>1e-6)
			{
				x1=(-b+sqrt(disc))/(2*a);
				x2=(-b-sqrt(disc))/(2*a);
				printf("有两个不等实数根:%8.4f and %8.4f\n",x1,x2);
			}
			else
			{
				p=-b/(2*a);
				q=sqrt(-disc)/(2*a);
				printf("有两个不同复数根:\n");
				printf("%8.4f+%8.4fi\n",p,q);
				printf("%8.4f-%8.4fi\n",p,q);
			}
	}
}




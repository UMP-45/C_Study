#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,disc;
	void dayu(float a,float b,float c);     
	void dengyu(float a,float b,float c);
	void xiaoyu(float a,float b,float c);
	printf("ÇëÊäÈëa£¬b£¬cµÄÖµ\n");
    scanf("%f,%f,%f",&a,&b,&c);
    disc=b*b-4*a*c;
	if(disc>=1e-6)                      
	{dayu(a,b,c);}
	else if(disc<=-1e-6)                
	{xiaoyu(a,b,c);}
	else                                      
	{dengyu(a,b,c);}
}
void dayu(float a,float b,float c)          
{
	float disc,x1,x2;
	disc=b*b-4*a*c;
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b+sqrt(disc))/(2*a);
	printf("x1=%8.4f\nx2=%8.4f\n",x1,x2);
}
void dengyu(float a,float b,float c)           
{
	float disc,x;
	disc=b*b-4*a*c;
	x=-b/(2*a);
	printf("x1=x2=%8.4f\n",x);
}
void xiaoyu(float a,float b,float c)           
{
	float disc,p,q;
	disc=b*b-4*a*c;
	p=-b/(2*a);                               
	q=sqrt(-disc)/(2*a);
	printf("x1=%8.4f+%8.4fi\nx2=%8.4f-%8.4fi\n",p,q,p,q);
}
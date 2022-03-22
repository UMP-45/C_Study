#include <iostream>
#include <math.h>
class equation
{
	private:
	float a,b,c;
	int good;
	float root1,root2;
	public:
	equation (float,float,float);
	~equation(){printf("Good bye!\n");}
	float disc();
	void solve();
	void show();
	float root_1();
	float root_2();
}
equation :: equation(float A,float B,float C)
{
	a=A,b=B,c=C;good=1;
	if(fabs(a)<1e-6)
	{
		printf("a=0,input again.The program will be stopped!\n");
		good=0,exit(0);
	}
}
float equation :: disc ()
{
	return b*b-4*a*c;
}
void equation :: solve()
{
	if(fabs(disc())<=1e-6)
		root1=root2=-b/(2*a);
	else if(disc()>1e-6)
	{
		root1=(-b+sqrt(disc()))/(2*a);root2=(-b-sqrt(disc()))/(2*a);
	}
	else 
	{
		printf("has not real roots,input again.the program will be stopped\n!");good=0;exit(0);
	}
}
void equation :: show()
{
	printf("the coefficients of the equation are:a=%f,b=%f,c=%f\n",a,b,c);
	if(good)
		printf("the roots are:root1=%f,root2=%f\n",root1,root2);
	else printf("sorry,the equation has not real roots.\n");
}
float equation :: root_1()
{
	if(good)return root1;
	else printf("sorry,the equation has not real roots.\n");
}
float equation :: root_2()
{
	if(good)return root_2;
	else printf("sorry,the equation has not real roots.\n");
}
int main()
{
	equation e(0,5,1);
	e.solve();
	e.show();
	return 0;
}
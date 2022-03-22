#include<stdio.h>
int main()
{
	int year=1600,leap;
	scanf("%d",&year);
	for ( ;year!=1; --year ){
	if(( year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 ) )
		leap=1;
	else
		leap=0;
	
	if(leap)
		printf("%d is\n",year);
	//else
	//	printf("%d is not\n",year);
	
	//printf("a leap year\n");
    }
}
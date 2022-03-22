#include<stdio.h>

int power(int m, int n);
int main( int argc, char *argv[] ){
 int c;
 c = 0; 
/*
 c = getchar();
 while (c != EOF ){
   putchar(c);
   c = getchar();
  */
/*while( ( c = getchar() ) != EOF ) putchar( c );*/
 
 unsigned long long nc = 0;
 for( ; getchar() != '\n' ; ++nc );
 printf( "%ld\n", nc );

 [0-9A-z]+
return 0;}

int power(int base, int n)
 {
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
    p = p * base;
    return p;
 }
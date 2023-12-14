#include<stdio.h>
int foo(int a){
if( a == 0 || a ==2) return 1;
return (foo(--a) * (a--));
}
int main()
{
printf("%d\n",foo(4));
}
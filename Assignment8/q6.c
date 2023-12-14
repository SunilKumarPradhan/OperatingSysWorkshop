#include<stdio.h>
unsigned int foo(unsigned int n, unsigned int r)
{
if(n>0) return((n%r)+foo(n/r,r));
else return 0;
}
int main()
{
printf("%d\n",foo(345,10));
return 0;
}

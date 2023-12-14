#include<stdio.h>
void print(int n)
{
printf("Hello ");
if(n++ == 0) return ;
print(n);
n++;
}
int main()
{
print(-4);
}
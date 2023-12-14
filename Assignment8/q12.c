#include <stdio.h>
int fun(int num){
while(num>0)
num=num*fun(num-1);
return num;
}
int main(){
int x=fun(8);
printf("%d",x);
return 0;
}
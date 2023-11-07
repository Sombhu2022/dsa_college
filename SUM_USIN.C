#include<stdio.h>
#include<conio.h>
//int sum(int a , int b);

int sum(a,b){
  return a+b;
}
void main(){
int a,b,result;
clrscr();
printf("enter two numbers:");
scanf("%d%d",&a,&b);
//result=sum(a,b);
//printf("%d + %d=%d",a,b,result);
printf("%d + %d = %d",a,b,sum(a,b));
getch();
}
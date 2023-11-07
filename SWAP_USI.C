
#include<stdio.h>
#include<conio.h>

void swap(a,b){
  a=a+b;
  b=a-b;
  a=a-b;
  printf("      \nafter swapping value is:a= %d ,b= %d\n",a,b);
}


void main(){
  int a,b ;
  clrscr();
  printf("enter the two numbers:");
  scanf("%d%d",&a,&b);
  printf("before swapping value is:a= %d ,b= %d",a,b);
  swap(a,b);
  getch();

}
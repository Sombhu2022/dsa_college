// swap of two number ...
#include<stdio.h>
#include<conio.h>
void main(){
     float a,b;
     clrscr();
     printf("enter the two number :");
     scanf("%f%f",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("After swaping=%f , %f",a,b);
     getch();
}
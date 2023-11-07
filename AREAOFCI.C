//area of circle ...

#include<stdio.h>
#include<conio.h>
void main(){
   float r,pi=22/7,area;
   clrscr();
   printf("enter the redius of circle :");
   scanf("%f",&r);
   area = pi*r*r;
   printf("Area=%f",area);
   getch();

}
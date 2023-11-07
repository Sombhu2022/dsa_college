// max value of three number ....

#include<stdio.h>
#include<conio.h>
void main(){
     int a,b,c,max=0;
     clrscr();
     printf("enter the numbers:");
     scanf("%d%d%d", &a, &b, &c);
     max = a>b? a:b;
     max= max>c? max:c;
     printf("%d is a max value ", max);
     getch();



}
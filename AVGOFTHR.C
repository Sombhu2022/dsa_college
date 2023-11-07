//avg of three number
#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();
 float x, y,z,avg=0.0;
 printf("enter three number:");
 scanf("%f%f%f",&x,&y,&z);
 avg=(x+y+z)/3;
 printf("avg=%f",avg);
 getch();
}
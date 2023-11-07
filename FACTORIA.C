//write a programm to find factorial of n using fun recurtion
#include<stdio.h>
#include<conio.h>
int fun(int n);
int fun(int n){
 if(n==0){
    return 1; }
 return n*fun(n-1);

}
void main(){
 int n ,result;
 clrscr();
 printf("enter the number : ");
 scanf("%d",&n);
 result=fun(n);
 printf("the value is : %d",result);
 getch();
}
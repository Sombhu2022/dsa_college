//even or odd number ...
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("enter the Number :");
    scanf("%d",&n);
    if(n%2 == 0)
       printf("%d is a even number ",n);
    else
       printf("%d is a odd number ",n);
    getch();


}
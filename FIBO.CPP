//print n fibonacci number .
#include<stdio.h>
#include<conio.h>
void main(){


int i,n1=0,n2=1,sum=0, n;
clrscr();
printf("enter the range:\n");
scanf("%d",&n);
printf("%d\n%d\n",n1,n2);
for(i=1; i<=n-2 ; i++)
{

  sum=n1+n2;
  printf("%d\n",sum);
  n1=n2;
  n2=sum;
}
getch();

}


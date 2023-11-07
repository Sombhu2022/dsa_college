//display array element ..

#include<stdio.h>
#include<conio.h>
void main(){
    int n ;
    clrscr();
    printf("enter the range");
    scanf("%d",&n);
    if(n>100) printf("array range is must be under 100");
    int arr[100],i;
    printf("enter array value: ");

    for(i=1;i<=n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("output of the given array: ");
      for(i=1;i<=n;i++)
    {
     printf("%d\n",arr[i]);
     result+= arr[i];
    }
    printf("output of the ")
  getch();
}
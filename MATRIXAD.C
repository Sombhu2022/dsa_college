//add two matrix ..

#include<stdio.h>
#include<conio.h>
void main(){
    int r,c;
    clrscr();
    printf("enter the range of row and column");
    scanf("%d%d",&r,&c);
    if(r>100 || c>100) printf("array range is must be under 100");
    int arr[100][100],arr2[100][100],i ,j;
    printf("enter first array element : ");

    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++){
      scanf("%d  ",&arr[i][j]);
     } printf("\n");
    }
     printf("enter the second array element:");
     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++){
     scanf("%d  ",&arr2[i][j]);
     }printf("\n");
    }

    printf("result \n\n");

     for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++){
     printf("%d ",arr[i][j]+arr2[i][j]);
     }
     printf("\n");
    }
  getch();
}


#include<stdio.h>
#include<conio.h>
void main(){

int i,n,j,k=1 ;
clrscr();
printf("enter the range:");
scanf("%d",&n);

/*
  put n number ..
   ****...
   ****...
   ****...
   .......

*/

/*
printf("first pattern\n\n");
for(i=1;i<=n;i++)
{
   for(j=1;j<=n;j++){
      printf("*");
   }
   printf("\n");

}
*/

/*
  put n number ..
   *
   **
   ***
   ****
   .......

*/

/*
printf("\n\n\n second pattern\n\n");
for(i=1;i<=n;i++)
{
   for(j=1;j<=i;j++){
      printf("*");
   }
   printf("\n");

}

 */


 /*

   1
   23
   456
   78910



 */

/*
 printf("3rd pattern\n\n");

 for(i=1;i<=n;i++)
{
   for(j=1;j<=i;j++){
      printf("%d ",k++);
   }
   printf("\n");

}
*/

/*

      *
     **
    ***
   ****
.......


*/

for(i=1;i<=n;i++)
{
   for(j=1;j<=n;j++){
      if(j<=n-i){
	 printf(" ");
      }else{
	 printf("*");
      }
   }
   printf("\n");

}

getch();

}
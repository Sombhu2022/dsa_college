//print 1 to n ..,......
#include<stdio.h>
#include<conio.h>
void main(){


int i=1, n;
clrscr();
printf("enter the range:\n");
scanf("%d",&n);


//display 1 to n using while loop .
/*
while(i<=n)
{
  printf("%d\n",i++);

}

*/

//display 1 to n using do while loop .

/*
do{
   printf("%d\n",i++);
   }while(i<=n);

 */
for(i=1;i<=n;i++)
{
printf("%d\n",i);
}
getch();
}
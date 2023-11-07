// wap to find n fibonacci number using recurtion .

#include<stdio.h>
#include<conio.h>
int recurtion(int n){
 if(n==1) return 0;
 if(n==2) return 1;
 return recurtion(n-1)+recurtion(n-2);

}
void main(){
 int n,i,result;
 clrscr();
 printf("enter the number : ");
 scanf("%d",&n);
 printf("\n\n");
 for(i=1;i<=n;i++)
 {
   result = recurtion(i);
   printf("%u ",result);
 }


 getch();
}
// check prime or not
#include<stdio.h>
#include<conio.h>
void main(){
int n ,i, c=0;
clrscr();
printf("enter the number :");
scanf("%d",&n);
if(n<=1){
printf("%d is not prime number .",n);
}
else{
  for(i=2; i<=n ; i++)
  {
    if(n%i == 0)
      {  c += 1; }
  }

  if(c==1)
    printf("%d is prime number",n);
  else
    printf("%d is not prime number.",n);
}
getch();
}
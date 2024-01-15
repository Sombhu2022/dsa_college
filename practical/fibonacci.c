#include<stdio.h>

int main(){
    int a = 0 , b =1 ,i, n,c=0;
    printf("enter the range of the fibo serise");
    scanf("%d" , &n);
    printf("%d   %d" , a ,b);
    while (c<n)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d ", c);
    }
    
    
}
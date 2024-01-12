#include<stdio.h>
void swap(int *a ,int  *b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
   
}

int main(){
    int a  ,ans,  b;
    printf("enter the two number : ");
    scanf("%d %d" , &a , &b);
    printf("%d , %d \n" , a , b);
    swap(&a, &b);
    printf("%d , %d" ,a,b );
    return 1 ;
}
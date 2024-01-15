#include<stdio.h>

void palindrom(int n){
    int copy = n;
    int digit , ans =0;
    while (n>0)
    {
        digit = n%10;
        ans = (ans*10)+digit;
        n = n/10;
    }
    if(copy == ans){
        printf("this is palindrom number %d", ans);
    }else{
        printf("this is not palindrom number %d" , copy);
    }
}

int main(){
    int number;
    printf("enter the number");
    scanf("%d" , &number);
    palindrom(number);

}
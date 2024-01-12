// Tower of Hanoi problem
#include<stdio.h>

void tower(int n , char a , char b , char c){
    if (n == 0){
        return ; 
    }
    tower(n-1 , a , c , b);
    printf(" %d dike -- %c -> %c  \n" , n , a ,b ,c);
    tower(n-1 , c , b, a);

}

int main(){
    int n =4;
    tower(n , 'A' , 'C' , 'B');
    return 1;
}
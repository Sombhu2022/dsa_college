// tail recurtion is a simple recurtion , there are no more statment , after calling recursive function

#include<stdio.h>

int fact(int n , int f ){
  
   if ( n <= 0) return f;
   return fact(n-1 , n*f);

}

int main(){
    long n , result;
    printf("    *.....tail recurtion.....*      \n");
    printf("\n Enter the number ");
    scanf(" %d" , &n);
    result = fact(n ,1);
    printf(" the factorial number is : -- %d ", result);
    return 1;
}
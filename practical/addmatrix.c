#include<stdio.h>

int main(){
    
    int r , c,i,j ;
    int matrix1[10][10] , matrix2[10][10];
    printf("Enter the row and column of two matrix [ whene we can parform matrix add then, we must be put same row and column ]");
    scanf("%d  %d", &r , &c);

    printf("Enter the first matrix");
    for(i=0 ; i < r ;i++){
        for ( j = 0; j < c; j++)
        {
            printf(" \n [ %d , %d ] : ",i ,j);
            scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
        
    }
    
    printf("enter the second matrix");
    for(i=0 ; i<r;i++){
        for ( j= 0; j < c; j++)
        {
            printf(" \n [ %d , %d ] :",i ,j);
            scanf("%d",&matrix2[i][j]);
        }
        printf("\n");
        
    }

    printf("addition of two matrix are");

    for(i=0 ; i<r;i++){
        for ( j= 0; j < c; j++)
        {
            printf(" \n [ %d , %d ] : %d",i,j,matrix1[i][j]+matrix2[i][j]);

        }
          printf("\n");
         }
    
    // for(i=0 ; i<r;i++){
    //     for ( j= 0; j < c; j++)
    //     {
    //         printf("%d \t",matrix1[i][j]);
    //     }
    //     printf("\n");
        
    // }


}
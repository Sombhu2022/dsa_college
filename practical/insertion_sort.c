#include<stdio.h>

int main(){
    int arr[100] , n , ele , j;

    printf("enter the range of arr ");
    scanf("%d" , &n);

    printf("enter the element in array ");
    for( i = 0 ; i < n ; i++){

        scanf("%d", arr[i]);
    }

    // sorting logic

    for ( i = 1; i < n; i++)
    {
        ele = arr[i];
        j = i-1;  // secont pointer for sorted array

        while ( j >= 0 && ele < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
            
        }
         arr[j+1] = ele;
    }


    for ( i = 0; i < n; i++)
    {
        printf("%d" , arr[i]);
    }
    
    


}
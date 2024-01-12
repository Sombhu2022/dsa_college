#include<stdio.h>
void printArray( int arr[100] , int n);
void printArray(int arr[100]  ,int  n){
    int i ;
    for(i =0 ; i<n ; i++){
        printf(" %d  ," , arr[i]);
    }
}


void insertionSort( int arr[100], int n){
    int i=0 , j , temp;
    int min ;
    for ( i = 0; i < n-1; i++)
    {
        min=i;

        for (j = i+1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }

        if (min != i)
            {
                temp=arr[min];
                arr[min]=arr[i];
                arr[i] = temp;
            }
    }
    
    
   
  printArray(arr , n);
  
}
int main(){
    int n , arr[100] , i;
    printf("bubble sort algoorithm \n");

    printf("Enter the size of the array");
    scanf("%d" , &n);
    if (n > 100) {
        printf("max length of array is 100");
    }else{
        printf("enter array element");
        for(i=0 ; i<n ; i++){
            scanf("%d", &arr[i]);
        }
        printArray( arr , n);
        printf("\n after sort  array is :");
        insertionSort(arr , n);
       
    }
 
   return 1;
}
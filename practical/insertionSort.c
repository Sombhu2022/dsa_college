#include<stdio.h>
void printArray( int arr[100] , int n);
void printArray(int arr[100]  ,int  n){
    int i ;
    for(i =0 ; i<n ; i++){
        printf(" %d  ," , arr[i]);
    }
}


void insertionSort( int arr[100], int n){
    int i, j , temp;
    for ( i = 1; i < n; i++)
    {
        temp = arr[i];
        j=i-1;

        while (j>=0 && arr[j] > temp) 
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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
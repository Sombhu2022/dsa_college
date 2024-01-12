#include<stdio.h>

int linear(int arr[],int n , int val){
     int i;
     for(i=0;i<n;i++){
        if(arr[i]== val) return i;
     }
     return -1;
}

int main(){
    int arr[100],n,val,i,result;
    printf("enter the range of array");
    scanf("%d",&n);

    printf("enter array element");
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);

    }
    printf("enter the searching element");
    scanf("%d",&val);
   result = linear(arr ,n, val );
    if(result == -1){
        printf("element are not exist in array");
   }
   else{
       printf("\nelement are exist in array index %d" , result);
   }
    return 1;
}
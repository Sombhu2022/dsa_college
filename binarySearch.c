#include<stdio.h>

int binary(int arr[], int h,int l, int val){
    int mid = l+h/2 ;

    if(h==l){
         if(arr[l]== val) return l;
         return -1;
    }
    
    if(arr[mid]== val){
        return mid ;
    }
    else if (arr[mid]>val)
    {
        binary(arr,l,mid,val);
    }
    else{
        binary(arr,mid,h,val);

    }
    
   return -1; 

}

int main(){
    int arr[100],n,i,h,val,l,pos;
    
    printf("enter the range of second array");
    scanf("%d",&n);
    printf("enter the second array element");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter searching value");
    scanf("%d",&val);
    h=n-1;
    l=0;
   pos= binary(arr,h,l,val);
   printf("location %d",pos);
}
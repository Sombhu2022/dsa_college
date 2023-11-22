/*
  arr1=[2,5,8,9] 
  arr2=[4,6,8,9,20]
  ans=[2,4,5,6,8,9,20]
*/

#include<stdio.h>
int main(){
    int m,n,arr1[100],arr2[100],ans[200],i,j,k,l;
   

    printf("enter the range of first array");
    scanf("%d",&m);
    printf("enter the first array element");
    for(i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }


    printf("enter the range of second array");
    scanf("%d",&n);
    printf("enter the second array element");
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    i=j=k=0;
    while (i<m && j<n)
    {
        if(arr1[i] > arr2[j]){
            ans[k++] = arr2[j++];
            l=k;
        }else{
            ans[k++]=arr1[i++];
            l=k;
        }
       
    }
  //  printf("end while %d  %d",k,l);
   if(i >m-1){
      for(i=j;i<n;i++){
        ans[l++]=arr2[i++];
      }
   } else{
      for(i=i;i<n;i++){
        ans[l++]=arr2[i++];
      }
   }
    printf("print ans  ");
    for(i=0;i<l;i++){
        printf("%d  ",ans[i]);
    }
 return  ;

}
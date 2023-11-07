
/***** Array oparetions *******/
#include<stdio.h>
#include<conio.h>
void trav(int arr[100],int n);
void insert(int arr[100],int loc ,int n);
int deleteEle(int arr[100], int value,int n);
void search(int arr[100],int value,int n);
void sort(int arr[100],int n);




void trav(int arr[],int n){
   int i;
   printf(" array elements are :");
   for(i=1;i<=n;i++){
      printf(" %d , ",arr[i]);
   }

}
void insert(int arr[],int loc,int n)
{
   int i,value;
   if(loc<1 || loc>n){ printf("please input valid index"); return; }
   printf("enter the value : \n");
   scanf("%d",&value);
   for(i=n+1;i>loc;i--)
   {
      arr[i] = arr[i-1];
   }
   arr[loc]=value;
   n=n+1;

   trav(arr,n);
}


int deleteEle(int arr[],int value,int n){
   int loc=0,i;
   for(i=0;i<n;i++)
   {
      if(value == arr[i]){
	 loc=i;
      }
   }
   if(loc==0){printf("element not present."); return 0;}
   for(i=loc;i<n;i++){
       arr[i]=arr[i+1];
   }
   n=n-1;
   trav(arr,n);
   return 1;
}

void search(int arr[],int value,int n){
  int i,loc=0;
   for(i=1;i<=n;i++)
   {
     if(value == arr[i])
     {
	loc=i;
	break;
     }
   }
   if(loc!=0)
   {
      printf("serching value %d is present location of %d",value ,loc);
   }
   else{
      printf("searching value %d is not exist..", value);
   }
}

void sort(int arr[],int n){
  int i,j,temp;
  for(i=1;i<n;i++){
    for(j=i+1;j<=n;j++)
    { if(arr[i]>arr[j])
      {
	 temp=arr[i];
	 arr[i]=arr[j];
	 arr[j]=temp;
       }

    }

  }
  trav(arr,n);

}

void main(){
int n ,res, arr[100],i,j,choice,value,loc;
clrscr();
printf("enter the range of the array:");
scanf("%d",&n);
printf("enter the array element");
   for(i=1;i<=n;i++){
     scanf("%d",&arr[i]);
   }
printf("enter number: -- 1.show the array element, 2.add new element  , 3.delete element , 4.search ele , 5.sort array , 6.marge array\n");
scanf("%d",&choice);
switch(choice){
  case 1:
     trav(arr,n);
     break;
   case 2:
     printf("enter the location of the array , where you want to add the new element:  ");
     scanf("%d",&loc);

     insert(arr,loc,n);
     break;
   case 3:
     printf("enter the location of the array , where you want to delete element : \n");
     scanf("%d",&loc);
     deleteEle(arr,loc,n);
     break;
   case 4:
     printf("enter the element ,that you want to search");
     scanf("%d",&value);
     search(arr,value,n);
     break;
  case 5:
     sort(arr,n);
     break;
/* case 1:
     trav(arr);
     break;    */

}
  getch();
}


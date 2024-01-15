#include<stdio.h>

#define max_size 10


int stack[max_size];
int top =-1;
int empty(){
    return top<0;

}

int stackfull(){
    return  top == max_size-1 ;
}

void push(){
    int element;
     printf("\npush func");
   if (stackfull()){
       printf("Stack is overfllow");
       
   } else{
        printf("enter the element");
        scanf("%d",&element);
        top++;
        stack[top]= element;
        
             
   }


}

void show(){
    int i;
     if(empty()){
        printf("\nstack is underfllow");
    }
   printf("\nshow function");
   for(i=top; i >=0;i--){
        printf(" <- %d ", stack[i]);

   }
    // while(! empty()){
    //     printf(" <- %d ", stack[top]);
    //     top--;
    // }

}

void pop(){
    if(empty()){
        printf("\nstack is underfllow");
    }
    else{
        top--;
    }
}

int main(){
    
  int a;
      int ele ;
     while (1)
     {
     printf("Enter the choice -- 1.insrt \n 2.delete \n3.print \n4.exit");
     scanf("%d" , &a);
       
     switch (a)
     {
     case 1:
        push();
        break;
     case 2:
        pop();
        break;
     case 3:
       show();
        break;
     
     case 4:
     printf("exit");
        return 1;
     
     default:
     printf("enter valid choice\n");
       return 1;
     }
     }
    
}
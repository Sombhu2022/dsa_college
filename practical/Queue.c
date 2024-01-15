#include<stdio.h>
#define MAX_SIZE 10
int Queue[10],front=-1,rear=-1;

int empty(){
    if (front == -1 && rear == -1)
    {
        return 1;
    }
    return 0;
    
}

void printQueue(){
    int i=0;
    if(empty()){
        printf("Queue is empty");
    }
    else{

    for ( i = front ; i <= rear; i++)
    {
       printf(" %d->%d  | ", i, Queue[i]);
    }
    printf("\n\n");
    }
    
}

// time complexcity of enqueue in linear queue O(1)
void enqueue(int element){
    if(rear+1 == MAX_SIZE){
        printf("Queue is alrady full");
    }
    else{
       if (front == -1) front = front+1;
    rear=rear+1;
    Queue[rear] = element ;
    printQueue();
   }
}

// time complexcity of dequeue in linear queue O(1)

void dequeue(){
    
    if(empty()) 
    {

    printf("Queue is alrady empty\n");
    }
    else{
        if( front == rear) 
        {front = rear=-1;}
       else{ front = front+1;
       printQueue();
       }
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
       
        printf("enter the element:");
        scanf("%d" ,  &ele) ;
        enqueue(ele);
        break;
     case 2:
        dequeue();
        break;
     case 3:
        printQueue();
        break;
     
     case 4:
     printf("exit");
        return 1;
     
     default:
     printf("enter valid choice\n");
       break;
     }
     }
     
}
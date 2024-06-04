#include<stdio.h>
#define size 11
int q[size],front=0,rear=0;
void insert(x){
if(rear>=size-1){
    printf("Queue is full ");
}
else if(front ==-1 && rear ==-1){
front=rear=0;
q[rear]=x;    
    }
    else{
        rear++;
        q[rear]=x;
    }
}
void delete(){
    if(front ==-1 && rear==-1){
        printf("Queue is empty :");
    }
    else if(front==rear){
        printf("Deleted element is %d",q[front]);
        front=rear=-1;
    }
    else{
        printf("Deleted element is %d",q[front]);
        front++;
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty ");
    }
    else{
        while(front<rear+1){
printf("Data is %d",q[front]);
front++;
        }
    }
}
void peek(){
    if(front==-1 && rear==-1)[
        printf("Queue is empty :");
    ]
    else{
        printf("peeked element is %d",q[rear]);
    }
}
int main(){
int ch;
do{
    Printf("\n main menu :");
    Printf("\n 1.Insert");
    Printf("\n 2.Delete");
    Printf("\n 3.Display");
    Printf("\n 4.Exit");

    Printf("\n Enter your choice :");
    scanf("%d",&ch);

    switch(ch){
        case 1:
int num;
printf("Enter element to insert :");
scanf("%d",&num);
        insert(num);
        display();
        continue;

        case 2:
        delete();
        display();
        continue;

        case 3:
        display();
        continue;

        case 4:
        break;

        default:
        Printf("Enter valid value ");
    }
    Printf("\n press any key to continue ");
}while(ch=!4);
}
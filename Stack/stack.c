#include<stdio.h>
#define size 100
int stk[size],top=-1;

int push(){
    int no;
    if(top<size-1){
        printf("\n Stack is full :");
    }
    else{
        printf("Enter number :");
        scanf("%d",&no);
        stk[++top]=no;
    }
}

int pop(){
    if(top<0){
        printf("Stack is empty :");
    }
    else{
        printf("Deleted element is %d",stk[top--]);
    }
}

int Display(){
    if(top<0){
        printf("stack is empty :");
    }
    else{
        for(int i=top; i>=0; i--){
            printf("The element is %d at position %d",stk[i],i);
        }
    }
}
int peep(){
    int  x;
    if(top<0){
        printf("\n Stack is empty :");
    }
    else{
        printf("Enter position to read an element :");
        scanf("%d",&x);

        if(x<0 || x>top+1){
            printf("\n out of range ");
        }
        else{
            printf("\n the peeped element is %d",stk[top-x+1]);
        }
    }
}

int change(){
    int x;
    if(top<0){
        printf("stack is empty");
    }
    else{
        printf("Enter position");
        scanf("%d",&x);

        if(x<0 || x>top+1){
            printf("out of range ");
        }
        else{
            printf("Enter a new data ");
            scanf("%d",&stk[top-(x-1)]);
            printf("\n inputed elelemt is %d",stk[top-x+1]);
        }
    }
}
int main(){
int ch;
do{
    printf("Main menu :");
    printf("\n 1.push ");
    printf("\n 2.pop ");
    printf("\n 3.Display ");
    printf("\n 4.peep ");
    printf("\n 5.Change ");
    printf("\n 6.Exit ");

    printf("\n Enter your choice :");
    scanf("%d",&ch);

    switch(ch){
        case 1:
        push();
        continue;

        case 2:
        pop();
        continue;

        case 3:
        Display();
        continue;

        case 4:
        peep();
        continue;

        case 5:
        Change();
        continue;

        case 6:
        exit(0);

        default:
        printf("End of session ");
    }
}
}
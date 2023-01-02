#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 15

int forCount=0;
struct  stack{

    int data[MAXOFSTACK];

    int top;

};

typedef struct stack st;

void creatEmptyStack(st *myStack){

    myStack->top = -1;

}

int  isStackIsFll(st *myStack){

    if(myStack->top == MAXOFSTACK-1){
        return -1;
    } else{
        return 1;
    }
}

void pushToStack(st *myStack , int value){

    if(isStackIsFll(myStack)== -1){
        printf("stack is full\n");
    } else{

        myStack->top++;

        myStack->data[myStack->top] = value;

        forCount++;

    }

}

int isStackIsEmpty(st *myStack){

    if(myStack->top==-1){
        return 2;
    } else{
        return 0;
    }
}

void popFromStack(st *myStack){

    if(isStackIsEmpty(myStack)){
        printf("stack is empty");
    } else{
        for(int i = myStack->top;i>=0;i--){

            printf("Pop from stack data is : %d \n",myStack->data[i]);

        }
        printf("\n\n");
        printf("Number of data in Stack : %d\n",forCount);

    }

}

int main (){

    st *myStack = (st*)malloc(sizeof(st) );

    creatEmptyStack(myStack);

    pushToStack(myStack, 5);
    pushToStack(myStack, 15);
    pushToStack(myStack, 25);
    pushToStack(myStack, 35);
    pushToStack(myStack, 45);
    pushToStack(myStack, 55);
    pushToStack(myStack, 65);
    pushToStack(myStack, 75);
    pushToStack(myStack, 85);
    pushToStack(myStack, 95);
    pushToStack(myStack, 105);
    pushToStack(myStack, 115);
    pushToStack(myStack, 125);
    pushToStack(myStack, 135);
    pushToStack(myStack, 145);


    popFromStack(myStack);

    return 0;
}
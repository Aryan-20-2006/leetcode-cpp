#include<stdio.h>
#include<stdlib.h>
#define MAX 10000


typedef struct Node{
    int val;
    struct Node* left;
    struct Node* right;
 
}Node;  //this is useless but ok

Node* newNode(int val){
    Node* node=(Node*)malloc(sizeof(Node));
    node->val=val;
    node->right= node->left=NULL;
    return node;
}

typedef struct{
    Node* items[MAX];
    int top;

} MinStack;

int isEmpty(MinStack* stack){
    return stack->top==-1;
}

MinStack* createMinStack(){
    MinStack* stack=(MinStack*)malloc(sizeof(MinStack));
    stack->top=-1;
    return stack;
}

void minStackPush(MinStack* stack,int val){

    stack->items[++stack->top]=newNode(val);

}

void minStackPop(MinStack *stack){


    if(isEmpty(stack)){
        return -1;
    }

    return stack->items[stack->top--];
}

int minStackTop(MinStack* stack){

    if(isEmpty(stack)){
        return -1;
    }

    return stack->items[stack->top]->val;


}

int minStackGetMin(MinStack* stack){

    if(isEmpty(stack)){
        return -1;
    }

    int min=stack->items[0]->val;
    for(int i=0;i<stack->top;i++){
        if(stack->items[i]->val<min){
            min=stack->items[i]->val;
        }
    }

    return min;

}

void minStackFree(MinStack* stack){
    free(stack);
}

int main(){

    MinStack* stack=createMinStack();
    minStackPush(stack,-2);
    minStackPush(stack,0);
    minStackPush(stack,-3);

    printf("%d\n",minStackGetMin(stack));
    return 0;

}




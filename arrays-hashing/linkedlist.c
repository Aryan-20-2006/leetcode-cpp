#include<stdio.h>
#include<stdlib.h>

//singly circular linked list

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node NODE;

NODE* getNode(int element){
    NODE *newNode;
    newNode=(NODE*)malloc(sizeof(NODE));
    newNode->data=element;
    newNode->next=NULL;
    return newNode;

}

void display(NODE *temp){
    if(temp==NULL){
        printf("List is empty");
        return;
    }

    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }

    printf("NULL\n");
}


void insert_front(NODE **head, int element){
    NODE *newNode=getNode(element);
    newNode->next=*head;
    *head=newNode;
}

int main(){
    NODE* head=NULL;
    int ch,val;

    do{
        printf("\n--- MENU ---\n");
        printf("1.Insert Front\n");
        printf("2.Display\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);

        switch(ch){

            case 1:
                printf("Enter value: ");
                scanf("%d",&val);
                insert_front(&head,val);
                break;
            case 2:
                display(head);
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(ch!=3);

    return 0;
}
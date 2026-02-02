#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node NODE;

NODE* getNode(int element){
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    newNode->data = element;
    newNode->next = NULL;
    return newNode;
}

void display(NODE *aux){
    if(aux == NULL){
        printf("List is empty\n");
        return;
    }
    while(aux != NULL){
        printf("%d -> ", aux->data);
        aux = aux->next;
    }
    printf("NULL\n");
}

void insert(NODE **head, int element, int pos){
    NODE *newNode = getNode(element);

    if(pos == 1){
        newNode->next = *head;
        *head = newNode;
        return;
    }

    NODE *temp = *head;
    for(int i = 1; i < pos-1 && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Position out of range!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void reverse(NODE **head){
    NODE *prev = NULL;
    NODE *curr = *head;
    NODE *next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *head = prev;
}

int main(){
    NODE *head = NULL;
    int ch, val, pos;

    do{
        printf("\n--- MENU ---\n");
        printf("1. Insert at Position\n");
        printf("2. Reverse\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                printf("Enter value and position: ");
                scanf("%d %d", &val, &pos);
                insert(&head, val, pos);
                break;

            case 2:
                reverse(&head);
                break;

            case 3:
                display(head);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(ch != 4);

    return 0;
}

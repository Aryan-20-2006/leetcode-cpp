#include<stdio.h>
#include<stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

struct Node* newNode(int val) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->val = val;
    n->next = NULL;
    return n;
}

void printList(struct Node* head){
    while(head!=NULL){
        printf("%d->", head->val);
        head=head->next;
    }

    printf("NULL\n");
}


struct Node* mergeTwoLists(struct Node* list1, struct Node* list2){

    struct Node temp;
    temp.next=NULL;

    struct Node* curr=&temp;

    struct Node* p1=list1;
    struct Node* p2=list2;

    while(p1!=NULL && p2!=NULL){
        if(p1->val<=p2->val){
            curr->next=p1;
            p1=p1->next;
        }

        else{
            curr->next=p2;
            p2=p2->next;
        }
        curr=curr->next;
    }

    if(p1!=NULL){
        curr->next=p1;
    }

    else{
        curr->next=p2;
    }


    return temp.next;



}

int main() {

    // List 1: 1 -> 2 -> 4
    struct Node* list1 = newNode(1);
    list1->next = newNode(2);
    list1->next->next = newNode(4);

    // List 2: 1 -> 2 -> 3 -> 4
    struct Node* list2 = newNode(1);
    list2->next = newNode(2);
    list2->next->next = newNode(3);
    list2->next->next->next = newNode(4);

    printf("List 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    struct Node* merged = mergeTwoLists(list1, list2);

    printf("Merged List: ");
    printList(merged);

    return 0;
}
//Problem-Linked list cycle
//Difficulty:Easy

//here we use the concept of fast and slow pointers

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    struct Node *next;
    Node(int x) : val(x), next(nullptr) {}
};

bool hasCycle(Node *head){

    if(head==nullptr|| head->next==nullptr ){  //!head means head==NULL in case if its an empty linked list or if there is only one node
        return false;           //head->next==NULL
    
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr){ //case for a singly linked list where fast cant be at NULL or at the last node otherwise no loop exists

        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return true;
        }
    }    

    return false;

}



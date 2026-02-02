//Problem:Reverse list
//Difficulty:Easy

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* getNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

void reverse(Node*& head){

    Node* prev=nullptr; //its better to use nullptr
    Node* curr=head;
    Node* next=nullptr;

    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;  
    }

    head=prev; //if function changes head-use Node*&
                //if function returns new head, use Node*
}

void insert(Node*& head, int value, int pos) {
    Node* newNode = getNode(value);

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of range\n";
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = nullptr;
    int choice, value, pos;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert at position\n";
        cout << "2. Reverse list\n";
        cout << "3. Display list\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value and position: ";
                cin >> value >> pos;
                insert(head, value, pos);
                break;

            case 2:
                reverse(head);
                cout << "List reversed\n";
                break;

            case 3:
                display(head);
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}
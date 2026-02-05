//Problem:Reorder list
//Difficult:Medium

//The list is given as l0->l1->.....ln-1->ln
//The reorderes list is l0->ln->l1->ln-1-->l2->ln-2....
//Things we know-
    //The position of l0 is not changed
    //The last element comes at the l1 position
    //the value at index 1 is goes to the next index
    //ln-1 may or may not be at the same position
    //the value of l2 goes to the last position(as per the example)

struct Node{
    int val;
    struct Node *next;
    struct Node *prev;
    Node(int x) : val(x), next(nullptr) {}
};

void reorderList(Node* head){


    //if there is only one node or no node
    if(head==nullptr || head->next==nullptr){
        return;
    }


    //find the middle of the list so we can split it
    Node* slow=head;
    Node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }

        //split the list
        Node* second=slow->next;
        slow->next=nullptr;

        //reverse the second half
        Node* prev=nullptr;
        Node* curr=second;
        while(curr!=nullptr){

            Node* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
           
            
        }

        Node* first=head;
        second=prev;

        //Merge
        while(second!=nullptr){
            Node* temp1=first->next;
            Node* temp2=second->next;

            first->next=second;
            second->next=temp1;

            first=temp1;
            second=temp2;
        }

    }



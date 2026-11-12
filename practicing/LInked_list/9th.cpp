#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int d): data(d), next(nullptr) {}
};

struct Linked_List{
    Node* head;
    Node* tail;

    Linked_List(): head(nullptr), tail(nullptr) {}

    void insertAthead(int value){
        Node* newNode=new Node(value);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return ;
        }

        newNode->next=head;
        head=newNode;

    }

    void insertAtTail(int value){
        Node* newNode=new Node(value);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return ;
        }

        tail->next=newNode;
        tail=newNode;
    }

    void input(){
        int n;
        cout<<"Enter total node number: ";
        cin>>n;
        cout<<"Enter values: ";
        for(int i=0; i<n;i++){
            int value;
            cin>>value;

            insertAtTail(value);
        }
    }

    void print(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }

    Node* find_middle(){
        if(head==nullptr) return 0;
        Node* fast=head;
        Node* slow=head;

        // if(head->next==nullptr || head->next->next==nullptr){
        //     return head->data;
        // }

        while(fast!=tail && fast!=nullptr){
            fast=fast->next->next;
            if(fast!=nullptr){
                slow=slow->next;
            }
            
        }

        return slow;

    }

    bool isPalindrome() {
    if (head == nullptr || head->next == nullptr) {
        return true; // Empty or single-node lists are always palindromes
    }

    // Step 1: Find the middle of the linked list
    Node* mid = find_middle();

    // Step 2: Split the list and reverse the second half
    Node* secondHalfHead = mid->next;
    mid->next = nullptr; // Temporarily terminate the first half

    // Reverse the second half using your reversal logic
    Node* prev = nullptr;
    Node* curr = secondHalfHead;
    Node* nextNode = nullptr;
    
    while (curr != nullptr) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    // Now 'prev' is the head of the reversed second half

    // Step 3: Compare both halves
    Node* p1 = head;
    Node* p2 = prev;
    bool palindromeResult = true;

    while (p2 != nullptr) {
        if (p1->data != p2->data) {
            palindromeResult = false;
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    // Step 4: Restore the second half back to its original order (Bonus)
    curr = prev;
    prev = nullptr;
    while (curr != nullptr) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    // Re-attach the restored second half to the middle node
    mid->next = prev;

    return palindromeResult;
}

};

int main(){
    Linked_List l1;

    l1.input();
    l1.print();

    cout<<"Middle of this node is: "<<l1.find_middle()<<endl;
}
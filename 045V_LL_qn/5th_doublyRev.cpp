#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};



void insertAthead(Node*& head, Node*& tail, int value){
    Node* newNode=new Node(value);

    if(head==nullptr){
        head=newNode;
        tail=newNode;
        return;
    }

    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}



void insertAtTail(Node*& head, Node*& tail, int value){
    Node* newNode=new Node(value);

    if(head==nullptr){
        head=newNode;
        tail=newNode;
        return;
    }

    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}



void insertAtPosition(Node*& head, Node*& tail, int position, int value){
    if(position==1){
        insertAthead(head, tail, value);
        return;
    }

    Node* temp=head;
    int crr=1;

    while(crr<position-1){
        temp=temp->next;
        crr++;
    }
    if(temp->next==nullptr){
        insertAtTail(head, tail, value);
        return;
    }

    Node* newNode=new Node(value);
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next->prev=newNode;
}



void inputLL(Node*& head, Node*& tail){
    int n, value;
    cout<<"Enter total number of nodes: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter value: ";
        cin>>value;

        insertAtTail(head, tail, value);
    }
}

void print(Node* head){
    Node* temp= head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}


void reverseLL(Node*& head, Node*& tail){
    tail=head;
    Node* crr=head;

    while(crr!=nullptr){
        Node* temp=head->next;
        head->next=head->prev;
        head->prev=temp;
        crr=head->prev;
        if(crr!=nullptr) head=crr;
    }
}


int main(){

    Node* head=nullptr;
    Node* tail=nullptr;

    inputLL(head, tail);

    print(head);

    reverseLL(head, tail);
  
    cout<<"After reversing: ";
    print(head);

}
#include<iostream>
using namespace std;

struct Node{
    int n;
    Node* next;

    Node(int n){
        this->n=n;
        this->next=nullptr;
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
    head=newNode;
}

void insertAtail(Node*& head, Node*& tail, int value){
    Node* newNode=new Node(value);

    if(head==nullptr){
        head=newNode;
        tail=newNode;
        return;
    }

    tail->next=newNode;
    tail=newNode;
}

void inputLL(Node*& head, Node*& tail){
    int a , value;
    cout<<"Enter the number of node: ";
    cin>>a;
    for(int i=0; i<a;i++){
        cout<<"Enter a value: ";
        cin>>value;
        insertAtail(head, tail, value);
    }
}

void reverseLL(Node* &head, Node* &tail){
    Node* prev=nullptr;
    Node* crr=head;
    tail=head;
    while(crr!=nullptr){
        crr=head->next;
        head->next=prev;
        prev=head;
        if(crr!=nullptr) head=crr;
    }
}

void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->n<<" ";
        temp=temp->next;
    }cout<<endl;
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
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

void inserAthead(Node* &head, Node* &tail, int value){
    Node* newNode=new Node(value);
    if(head==nullptr){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}

void inserAttail(Node*& head, Node*& tail, int value){
    Node* newNode=new Node(value);
    if(head==nullptr){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void print(Node* head){
    Node* temp= head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;

}

void llInput( Node* &head, Node* &tail){
    int a, value;
    cout<<"Enter the number of nodes: ";
    cin>>a;

    for(int i=0;i<a;i++){
        cout<<"Enter value: ";
        cin>>value;
        inserAttail(head, tail,value);
    }
}

void evenPrint(Node* head){

    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data%2==0){
            cout<<temp->data<<" ";
        }
        temp=temp->next;
    }cout<<endl;
}


int main(){
    Node* head=nullptr;
    Node* tail=nullptr;

    llInput(head, tail);

    print(head);
    cout<<"The even numbers are: ";
    evenPrint(head);
}
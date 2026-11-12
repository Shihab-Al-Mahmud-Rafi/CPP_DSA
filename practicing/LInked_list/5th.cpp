#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int info): data(info), next(nullptr){}

};

struct Linked_list{
    Node* head;
    Node* tail;

    Linked_list(): head(nullptr), tail(nullptr) {}

    void insertAthead(int value){
        Node* newNode=new Node(value);

        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return;
        }

        newNode->next=head;
        head=newNode;
    }

    void insertAtTail(int value){
        Node* newNode=new Node(value);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return;
        }

        tail->next=newNode;
        tail=newNode;
    }

    void input(){
        int n,value;
        cout<<"Enter total node number: ";
        cin>>n;

        for(int i=0;i<n;i++){
            cout<<"Enter a value: ";
            cin>>value;

            insertAtTail(value);
        }
    }

    void print() const{
        Node* current=head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }cout<<endl;
    }

    void insertAtPosition(int position, int value){
        if(position==1){
            insertAthead(value);
            return;
        }

        Node* temp=head;
        int crr=0;
        while(crr<position-1){
            temp=temp->next;
            crr++;
        }

        if(temp->next==nullptr){
            insertAtTail(value);
            return;
        }
        
        Node* newNode=new Node(value);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void reverse(){
        if(head==nullptr) return ;

       tail=head;
       Node* prev=nullptr;
       Node* nextNode=nullptr;
       Node* curr=head;

       while(curr!=nullptr){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
       }
       head=prev;

    }

};

int main(){
    Linked_list L1;
    L1.input();
    L1.print();

    L1.insertAthead(90);
    L1.print();

    L1.reverse();
    L1.print();

    cout<<"Hello"<<endl;
}
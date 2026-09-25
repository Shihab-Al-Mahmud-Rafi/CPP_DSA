#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

};

void print(Node* head){

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

//Gives length of the linked list
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void InsertAtHead(Node* &head, Node* &tail, int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void InsertAtTail(Node* &head, Node* &tail, int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }

    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position ==1){
        InsertAtHead(head,tail,d);
        return;
    }

    Node* temp= head;
    int crt=1;

    while(crt<position-1){
        temp=temp->next;
        crt++;
    }

    if(temp -> next == NULL){
        InsertAtTail(head,tail,d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    //cout<<"Length of the node is: "<<getLength(head)<<endl;

    InsertAtHead(head,tail,11);
    print(head);

    InsertAtHead(head,tail,13);
    print(head);

    InsertAtHead(head,tail,8);
    print(head);

    InsertAtTail(head,tail,25);
    print(head);
    //cout<<getLength(head)<<endl;

    InsertAtPosition(head,tail,2,100);
    print(head);

    InsertAtPosition(head,tail,1,101);
    print(head);

    InsertAtPosition(head,tail,7,102);
    print(head);





    


}
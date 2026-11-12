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

    int sizee(){
        int num=0;
        Node* temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            num++;
        }
        return num;
    }

    int finding_nth_node_from_end(int n){
        int a=sizee();
        if(n>0 && n<=a){
            int crr=0;
            Node* temp=head;
            while(crr<(a-n)){
                temp=temp->next;
                crr++;
            }
            return temp->data;
        }
        else{
            cout<<"Invalid input."<<endl;
           
        }
        return 0;
        
    }

};


int main(){
    Linked_List l1;

    l1.input();
    l1.print();

    cout<<"Nth node from last of this linked list is: "<<l1.finding_nth_node_from_end(2)<<endl;
}
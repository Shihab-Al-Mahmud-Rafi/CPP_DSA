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

    int find_middle(){
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

        return slow->data;

    }

};

int main(){
    Linked_List l1;

    l1.input();
    l1.print();

    cout<<"Middle of this node is: "<<l1.find_middle()<<endl;
}
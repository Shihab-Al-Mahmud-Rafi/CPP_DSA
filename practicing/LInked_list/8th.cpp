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

    void remove_duplicate(){
        Node* curr=head;
        while(curr!=nullptr){
            Node* runner=curr;
            while(runner->next!=nullptr){
                if(runner->next->data==curr->data){
                    Node* dup=runner->next;
                    runner->next=runner->next->next;
                    if(dup==tail){
                        tail=runner;
                    }
                    delete dup;
                }
                else{
                    runner=runner->next;
                }
            }
            curr=curr->next;
        }
    }
    

};


int main(){
    Linked_List l1;

    l1.input();
    l1.print();

    l1.remove_duplicate();
    l1.print();
}
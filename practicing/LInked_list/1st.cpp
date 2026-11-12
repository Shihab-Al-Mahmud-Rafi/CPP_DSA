//Write a function that counts the total number of nodes in a singly linked list

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data): data(data), next(nullptr) {}
};

struct Linked_list{
    Node* head;
    Node* tail;

    Linked_list(): head(nullptr), tail(nullptr) {}
};

void insertAthead(Linked_list &L, int data){
    Node* newNode=new Node(data);
    if(L.head==nullptr){
        L.head=newNode;
        L.tail=newNode;
        return;
    }

    newNode->next=L.head;
    L.head=newNode;
}

void insertAtTail(Linked_list &L1, int data){
    Node* newNode=new Node(data);
    if(L1.head==nullptr){
        L1.head=newNode;
        L1.tail=newNode;
        return;
    }

    L1.tail->next=newNode;
    L1.tail=newNode;

}

void LLinput(Linked_list &L){
    int n, value;
    cout<<"Enter total node number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter a value: ";
        cin>>value;

        insertAtTail(L,value);
    }
}

void print(Linked_list L){
    Node* temp=L.head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int freq(Linked_list L){
    int number=0;
    Node* temp=L.head;
    while(temp!=nullptr){
        number++;
        temp=temp->next;
    }
    return number;
}

int main(){
    Linked_list L1;

    LLinput(L1);
    print(L1);

    int n=freq(L1);

    cout<<"Total node: "<<n<<endl;


}
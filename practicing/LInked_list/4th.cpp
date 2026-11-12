#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data): data(data), next(nullptr) {}

    ~Node(){
        cout<<"Node deleted."<<endl;
    }
};

struct Linked_list{
    Node* head;
    Node* tail;

    Linked_list(): head(nullptr), tail(nullptr) {}

    void insertAtHead(int data){
        Node* newNode=new Node(data);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return;
        }

        newNode->next=head;
        head=newNode;
    }

    void insertAtTail(int data){
        Node* newNode=new Node(data);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return;
        }

        tail->next=newNode;
        tail=newNode;
    }

    void input(){
        int n, value;
        cout<<"Enter total node number: ";
        cin>>n;

        for(int i=0;i<n;i++){
            cout<<"Enter a value: ";
            cin>>value;

            insertAtTail(value);
        }
    }

    int found_at_index(int key){
        int idx=0;
        Node* temp=head;
        
        while(temp!=nullptr){
            if(temp->data==key){
                return idx;
            }
            idx++;
            temp=temp->next;
        }
        return -1;
    }

    void deleteNode(int value){
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            if (head == nullptr) {
                tail = nullptr;
            }
            delete temp;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }

        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            if (temp == tail) {
                tail = current;
            }
            delete temp;
        } else {
            cout << "Value not found in the list." << endl;
        }
    }
};

int main(){
    cout<<"Hello."<<endl;
}
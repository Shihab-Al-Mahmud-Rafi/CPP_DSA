#include<iostream>
using namespace std;

class Node{   //we create a class which name is node.
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this-> data= data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){//1."&head but not head because we want to alter the value at the address in the heap memory of head but not want to copy the head that is why we use &head."

    //New node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}

void InsertAtTail(Node* &tail, int d){//this function must be before InsertAtposition because in c++ function are define top to botom order.
    //New node created;
    Node* temp= new Node(d);
    tail->next=temp;
    tail=tail->next;
}


void InserAtPosition(Node* &tail, Node* &head,int position, int d){
    if(position ==1){
        InsertAtHead(head,d);
        return;
    }

    Node* temp= head;// 5.now it also take heap memory address of head.
    int crt=1;

    while(crt<position-1){
        temp=temp->next;//6.by this line temp will become the previous node of the new node we want to specifically place in a position.
        crt++;
    }

    if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

}

void deleteNode(Node* &head, int position ){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;//7.it will delete that heap memory address, only the refences is removed but not the actual data.
        //In C++, just changing or erasing the pointer (the reference) leaves the actual data sitting stranded on the heap memory.
        //You have to explicitly use delete to wipe out the data box too.
        //Java, on the other hand, detects that you removed the reference and destroys the data box for you automatically.
    }
    else{
        Node* crr=head;
        Node* pre=NULL;
         int cnt=1;
         while(cnt<position){
            pre=crr;
            crr=crr->next;
            cnt++;
         }

         pre->next=crr->next;
         crr->next=NULL;
         delete crr;
    }
}

void print(Node* &head){
    Node* temp=head;//2. we copy the first node, then print it.
    while(temp!=NULL){//we keep printing until we found the NULL
        cout<<temp->data<<" ";
        temp=temp->next;//3.we move to the next node.
    }
    cout<<endl;

}

int main(){

    //creating new node
    Node* node1= new Node(10);
    //cout<<node1 -> data <<endl;
    //cout<<node1 -> next <<endl;

    //head pointed to node1;
    Node* head=node1;//4. head and node1 maybe two variables but they pointing to the same memory heap adress. so any changes to the head Node, will automatuically the change the node1 Node.
    Node* tail = node1;//same thing as 4. goes for this line also
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InserAtPosition(tail,head,4,22);
    print(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    deleteNode(head,3);
    print(head);


}

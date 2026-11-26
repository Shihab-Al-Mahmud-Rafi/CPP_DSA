#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value): data(value), left(nullptr), right(nullptr){}
};

struct Binary_Search_Tree{
    Node* root;

    Binary_Search_Tree(): root(nullptr){}


    void insert(int value){
        root=insert_logic(root,value);

    };

    bool search(int value){
        return search_logic(root, value);
    }

    void preorder(){
        preOrder_logic(root);
    }

    void inorder(){
        inOrder_logic(root);
    }

    void postorder(){
        postOrder_logic(root);
    }

    void sorting(){
        inorder();
    }

    private:

    Node* insert_logic(Node* current, int value){
        if(current==nullptr){
            return new Node(value);
        }
        if(value<current->data){
            current->left=insert_logic(current->left, value);
        }
        else{
            current->right=insert_logic(current->right,value);
        }

        return current;
    }


    bool search_logic(Node* current, int target){
        if(current==nullptr){
            return false;
        }
        if(current->data==target){
            return true;
        }

        if(target<current->data){
            return search_logic(current->left,target);
        }
        else{
            return search_logic(current->right,target);
        }
    }


    void preOrder_logic(Node* curr){
        if(curr==nullptr){
            return;
        }

        cout<<curr->data<<" ";
        preOrder_logic(curr->left);
        preOrder_logic(curr->right);
    }


    void inOrder_logic(Node* current){
        if(current==nullptr){
            return;
        }

        inOrder_logic(current->left);
        cout<<current->data<<" ";
        inOrder_logic(current->right);
    }


    void postOrder_logic(Node* curr){
        if(curr==nullptr){
            return;
        }

        
        postOrder_logic(curr->left);
        postOrder_logic(curr->right);
         cout<<curr->data<<" ";
    }

};

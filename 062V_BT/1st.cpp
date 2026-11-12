#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int d): data(d), left(nullptr), right(nullptr) {}
};


/*

      60
     /   \
    25    50
   /  \   / \
  8   12 35  45
 /
5
//max heap

*/
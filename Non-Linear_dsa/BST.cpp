#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

class BST{

    public:
    Node *root;
    BST(){
        root = nullptr;
    }

//     void insert(int val){
//         Node *newnode = new Node(val);

//         if(root == nullptr){
//             root = newnode;
//             return ;
//         }
//         Node *curr = root;
//         while(true){
//             if(val < curr->data){
//                 if(curr->left==nullptr){
//                     curr->left = newnode;
//                     return ;
//                 }
//                 curr=curr->left;
//             }
//             if(val>curr->data){
//                 if(curr->right==nullptr){
//                     curr->right= newnode;
//                     return ;

//                 }
//                 curr=curr->right;
//             }
//         }
//     }

// };



int main(){
    BST b;
    b.insert(5);
    return 0;
}
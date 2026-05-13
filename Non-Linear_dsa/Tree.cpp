#include<iostream>
using namespace std;
#include<queue>

class node{
    public:
        int data;
        node  *left;
        node *right;
    node(int val){
        data = val;
        left = right = NULL;

    }
};

class Binarytree{
    public:
    node *root;

        Binarytree{
            root = nullptr;

        }

        void insert(int data){
            node *newNode = new node(data);
            if(root == nullptr){
                root = newNode;
                return ;
            }
            queue<node *> q;
            q.push(root);

            while(!q.empty()){
                node *temp = q.front();
                q.pop();

                if(temp->left == nullptr){
                    temp->left = newNode;
                    return ;
                }

                if(temp->right == nullptr){
                    temp->right = newNode;
                    return ;
                }
            }
        }

        bool search(int key){
            
        }

        void inorder(){

        }

        void levelorder(){
            if(root == nullptr){
                return ;
            }
            queue<node *>q;
            q.push(root);

            while(!q.empty()){
                node *temp = q.front();
                q.pop();

                cout<<temp->data<<" ";

                if(temp->left!= nullptr){
                    q.push(temp->left);
                }

                if(temp->right!= nullptr){
                    q.push(temp->right);
                }

            }

        }
};
int main(){
    Binarytree bt;
    bt.insert(10);
    bt.insert(20);
    bt.insert(30);
    bt.insert(40);
    bt.insert(50);
    bt.insert(60);

    cout<<"Level Order";
    bt.levelOrder();

    cout<<"\nPreorder:"
    
    return 0;
}
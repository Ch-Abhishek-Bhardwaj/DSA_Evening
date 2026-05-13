#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

class BinaryTree
{
public:
    Node *root;

    BinaryTree()
    {
        root = nullptr;
    }

    // ================= INSERT =================
    // Level-order insertion
    void insert(int data)
    {
        Node *newNode = new Node(data);

        if (root == nullptr)
        {
            root = newNode;
            return;
        }

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();

            if (temp->left == nullptr)
            {
                temp->left = newNode;
                return;
            }

            if (temp->right == nullptr)
            {
                temp->right = newNode;
                return;
            }

            q.push(temp->left);
            q.push(temp->right);
        }
    }

    // ================= SEARCH =================
    // Level-order search
    bool search(int key)
    {
        if (root == nullptr)
            return false;

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();

            if (temp->data == key)
                return true;

            if (temp->left != nullptr)
                q.push(temp->left);

            if (temp->right != nullptr)
                q.push(temp->right);
        }
        return false;
    }

    // ================= TRAVERSALS =================

    // Inorder Traversal
    void inorder(Node *node)
    {
        if (node == nullptr)
            return;

        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    // Preorder Traversal
    void preorder(Node *node)
    {
        if (node == nullptr)
            return;

        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    // Postorder Traversal
    void postorder(Node *node)
    {
        if (node == nullptr)
            return;

        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    // Level Order Traversal
    void levelOrder()
    {
        if (root == nullptr)
            return;

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if (temp->left != nullptr)
                q.push(temp->left);

            if (temp->right != nullptr)
                q.push(temp->right);
        }
    }

    // ================= SIZE =================
    int size()
    {
        if (root == nullptr)
            return 0;

        int count = 0;
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();

            count++;

            if (temp->left != nullptr)
                q.push(temp->left);

            if (temp->right != nullptr)
                q.push(temp->right);
        }

        return count;
    }
};

int main()
{
    BinaryTree bt;

    bt.insert(10);
    bt.insert(20);
    bt.insert(30);
    bt.insert(40);
    bt.insert(50);

    cout << "Level Order: ";
    bt.levelOrder();

    cout << "\nInorder: ";
    bt.inorder(bt.root);

    cout << "\nPreorder: ";
    bt.preorder(bt.root);

    cout << "\nPostorder: ";
    bt.postorder(bt.root);

    cout << "\nLevel Order: ";
    bt.levelOrder();

    cout << "\nSearch 30: " << (bt.search(30) ? "true" : "false");
    cout << "\nSearch 100: " << (bt.search(100) ? "true" : "false");

    cout << "\nSize: " << bt.size(); // 5

    return 0;
}
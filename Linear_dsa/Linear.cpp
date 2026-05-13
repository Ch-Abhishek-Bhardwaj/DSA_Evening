// Linked List

//non contiguous memory allocation
//dynamic memory allocation
//size is not fixed
//random access is not possible
//insertion and deletion is easy
//cons - extra memory is required for the pointer
//con - traversal is difficult

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};

class LinkedList{
    public:
    node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtHead(int val){
        node* newnode = new node(val);
        newnode->next = head;
        head = newnode;
    }

    void insertAtTail(int val){

        node* newNode = new node(val);
        if(head == NULL){
            head = newNode;
        }
        node* temp = head;
        
        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp->next=newNode;
    }

    void insertAtPostion(int val,int pos){

        if(pos == 1){
            insertAtHead(val);
            return ;
        }
        node* newNode = new node(val);
        node* temp = head;
        int count =1;
        while(count != pos-1){
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;

    }

    void deleteAtHead(){
        if(head == NULL){
            return;
        }
        head = head->next;
    }
    void deleteAtLast(){
        if(head == NULL){
            return ;
            
        }
        if(head->next == NULL){
            head = NULL;
            return ;
        }
        node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        temp->next=NULL;
    }

    

    void printLinkedList(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool search(int key){
        node* temp = head;
        while(temp!= NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtHead(1);
    ll.insertAtHead(2);
    ll.insertAtHead(3);
    ll.printLinkedList();
    cout<<ll.search(5)<<endl;
    ll.deleteAtHead();
    ll.insertAtTail(4);
    ll.insertAtTail(6);
    ll.printLinkedList();
    ll.deleteAtLast();
    cout<<endl;
    ll.printLinkedList();

    ll.insertAtPostion(45,1);
    cout<<endl;
    ll.printLinkedList();
    return 0;

}


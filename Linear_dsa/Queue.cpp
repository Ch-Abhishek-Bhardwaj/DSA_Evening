// Queue is a linear data structure that follows FIFO (First In First Out) principle
// Operations: Enqueue (add), Dequeue (remove), Front (peek), Rear (peek), traverse  time complexity: O(1) for enqueue and dequeue peek and traverse
#include <iostream>
using namespace std; 

class Queue{
    //Global variables
        int front;
        int rear;
        int *arr;
        int maxSize;        
    

    public:
    //constructor
    Queue(int maxSize){
        this->maxSize = maxSize;
        arr = new int[maxSize];
        front = -1;
        rear = -1;
    }
// adding element to the queue
    void enqueue(int element ){
        if(rear == maxSize - 1){
            cout << "Queue is full" << endl;
            return;
        }
        if(front == -1){
            front = 0;
        }
        rear++;
        arr[rear] = element;

    }
    // deleting element from the queue
    int dequeue(){
        if(front == -1 || front > rear){
            cout << "Queue is empty" << endl;
            return -1;
        }
        int element = arr[front];
        front++;
        if(front > rear){
            front = -1;
            rear = -1;
        }
        return element;
    }
    int peek(){
        if(front == -1 || front > rear){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty(){
        if(front == -1 || front > rear){
            return true;
        }
        return false;
    }
    bool isFull(){
        if(rear == maxSize - 1){
            return true;
        }
        return false;
    }
    int size(){
        if(isEmpty()){
            return 0;
        }
        return rear - front + 1;
    }
    void display(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout << "Dequeued element: " << q.dequeue() << endl;
    q.display();
    cout << "Front element: " << q.peek() << endl;
    cout << "Is queue empty? " << q.isEmpty() << endl;
    cout << "Is queue full? " << q.isFull() << endl;
    cout << "Size of queue: " << q.size() << endl;
    return 0;
}


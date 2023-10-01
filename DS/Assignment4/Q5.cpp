#include <iostream>
using namespace std;

class queue{
    int front;
    int rear;
    int size;
    int *que;

    public:
        queue(){}
        queue(int size){
            front=rear=-1;
            this->size=size;
            que=new int[size];
        }
        void enqueue(int x){
            if(isFull()){
                cout<<"Queue is full"<<endl;
            }
            else{
                rear++;
                que[rear]=x;
                cout<<x<<" enqueued successfully"<<endl;
            }
        }
        int dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else{
                front++;
                int x=que[front];
                cout<<x<<" dequeued successfully"<<endl;
                return x;
            }
        }
        bool isEmpty(){
            if(front==rear){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if(rear==size-1){
                return true;
            }
            else{
                return false;
            }
        }
        void display(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Queue elements: ";
                for(int i=front+1;i<=rear;i++){
                    cout<<que[i]<<" ";
                }
                cout<<endl;
            }
        }
        int peek(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else{
                cout<<"Front element: "<<que[front+1]<<endl;
                return que[front+1];
            }
        }
};

class stackUsingQueue{
    queue q1;
    queue q2;

    public:
        stackUsingQueue(int size){
            q1=queue(size);
            q2=queue(size);
        }
        void push(int x){
            if(q1.isFull()){
                cout<<"Stack is full"<<endl;
            }
            else{
                q1.enqueue(x);
            }
        }
        int pop(){
            if(q1.isEmpty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                while(q1.peek()!=-1){
                    q2.enqueue(q1.dequeue());
                }
                int x=q2.dequeue();
                while(q2.peek()!=-1){
                    q1.enqueue(q2.dequeue());
                }
                return x;
            }
        }
        int peek(){
            if(q1.isEmpty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                while(q1.peek()!=-1){
                    q2.enqueue(q1.dequeue());
                }
                int x=q2.peek();
                while(q2.peek()!=-1){
                    q1.enqueue(q2.dequeue());
                }
                return x;
            }
        }
        void display(){
            if(q1.isEmpty()){
                cout<<"Stack is empty"<<endl;
            }
            else{
                while(q1.peek()!=-1){
                    q2.enqueue(q1.dequeue());
                }
                q2.display();
                while(q2.peek()!=-1){
                    q1.enqueue(q2.dequeue());
                }
            }
        }
};

int main() {
    
    return 0;
}
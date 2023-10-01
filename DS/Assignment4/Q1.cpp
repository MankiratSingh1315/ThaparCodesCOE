#include <iostream>
using namespace std;

class queue{
    int front;
    int rear;
    int size;
    int *que;

    public:
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

int main() {
    int size;
    cout<<"Enter the size of the queue: ";
    cin>>size;
    queue q(size);
    int choice;
    do{
        cout<<"Enter your choice:"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Check if queue is empty"<<endl;
        cout<<"4. Check if queue is full"<<endl;
        cout<<"5. Display queue elements"<<endl;
        cout<<"6. Peek front element"<<endl;
        cout<<"7. Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                int x;
                cout<<"Enter the element to enqueue: ";
                cin>>x;
                q.enqueue(x);
                break;
            }
            case 2:{
                q.dequeue();
                break;
            }
            case 3:{
                if(q.isEmpty()){
                    cout<<"Queue is empty"<<endl;
                }
                else{
                    cout<<"Queue is not empty"<<endl;
                }
                break;
            }
            case 4:{
                if(q.isFull()){
                    cout<<"Queue is full"<<endl;
                }
                else{
                    cout<<"Queue is not full"<<endl;
                }
                break;
            }
            case 5:{
                q.display();
                break;
            }
            case 6:{
                q.peek();
                break;
            }
            case 7:{
                cout<<"Exiting..."<<endl;
                break;
            }
            default:{
                cout<<"Invalid choice"<<endl;
                break;
            }
        }
    }while(choice!=7);
    return 0;
}
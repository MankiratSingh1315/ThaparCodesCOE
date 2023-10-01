#include <iostream>
using namespace std;

class cirQueue{
    int front;
    int rear;
    int size;
    int *que;

    public:
        cirQueue(int size){
            front=rear=-1;
            this->size=size;
            que=new int[size];
        }
        void enqueue(int x){
            if(isFull()){
                cout<<"Queue is full"<<endl;
            }
            else{
                if(front==-1){
                    front=0;
                }
                rear=(rear+1)%size;
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
                int x=que[front];
                if(front==rear){
                    front=rear=-1;
                }
                else{
                    front=(front+1)%size;
                }
                cout<<x<<" dequeued successfully"<<endl;
                return x;
            }
        }
        bool isEmpty(){
            if(front==-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if((rear+1)%size==front){
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
                int i=front;
                while(i!=rear){
                    cout<<que[i]<<" ";
                    i=(i+1)%size;
                }
                cout<<que[rear]<<endl;
            }
        }
        int peek(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else{
                cout<<"Front element: "<<que[front]<<endl;
                return que[front];
            }
        }
};

int main() {
    int size;
    cout<<"Enter the size of the cirQueue: ";
    cin>>size;
    cirQueue q(size);
    int choice;
    do{
        cout<<"Enter your choice:"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Check if cirQueue is empty"<<endl;
        cout<<"4. Check if cirQueue is full"<<endl;
        cout<<"5. Display cirQueue elements"<<endl;
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
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
                // cout<<x<<" enqueued successfully"<<endl;
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
                // cout<<x<<" dequeued successfully"<<endl;
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
        int siz(){
            return rear-front;
        }
};

void interleave(queue q){
    int n=q.siz();
    if(n%2!=0){
        cout<<"Queue size must be even"<<endl;
        return;
    }
    queue q1(n/2),q2((n/2)+1);
    for(int i=0;i<n/2;i++){
        q1.enqueue(q.dequeue());
    }
    while(!q.isEmpty()){
        q2.enqueue(q.dequeue());
    }
    while(!q1.isEmpty() && !q2.isEmpty()){
        cout<<q1.dequeue()<<" "<<q2.dequeue()<<" ";
    }
    cout<<endl;
}

int main() {
    int size;
    cout<<"Enter the size of the queue: ";
    cin>>size;
    queue q(size);
    for(int i=0;i<size;i++){
        int x;
        cout<<"Enter element "<<i+1<<": ";
        cin>>x;
        q.enqueue(x);
    }
    interleave(q);
    return 0;
}
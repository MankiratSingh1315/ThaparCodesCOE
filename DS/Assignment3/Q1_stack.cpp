#include<iostream>
using namespace std;

class Stack{
    int top;
    int size;
    int *arr;
    public:
        Stack(int size){
            this->size=size;
            top=-1;
            arr=new int[size];
        }
        void push(int data){
            if(top==size-1){
                cout<<"\nStack Overflow🫠";
                return;
            }
            arr[++top]=data;
        }
        int pop(){
            if(top==-1){
                cout<<"\nStack Underflow";
                return -1;
            }
            return arr[top--];
        }
        int peek(){
            if(top==-1){
                cout<<"\nStack is empty";
                return -1;
            }
            return arr[top];
        }
        bool isEmpty(){
            return top==-1;
        }
        bool isFull(){
            return top==size-1;
        }
        void display(){
            if(top==-1){
                cout<<"\nStack is empty";
                return;
            }
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
        }
};

int main(){
    int size;
    cout<<"\nEnter size of stack: ";
    cin>>size;
    Stack s(size);
    int choice;
    do{
        cout<<"\n1. Push";
        cout<<"\n2. Pop";
        cout<<"\n3. Peek";
        cout<<"\n4. Is Empty";
        cout<<"\n5. Is Full";
        cout<<"\n6. Display";
        cout<<"\n7. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                int data;
                cout<<"\nEnter data: ";
                cin>>data;
                s.push(data);
                break;
            case 2:
                cout<<"\n"<<s.pop()<<" is popped";
                break;
            case 3:
                cout<<"\n"<<s.peek()<<" is peeked";
                break;
            case 4:
                cout<<"\n"<<(s.isEmpty() ? "Stack is empty" : "Stack is not empty");
                break;
            case 5:
                cout<<"\n"<<(s.isFull() ? "Stack is full" : "Stack is not full");
                break;
            case 6:
                s.display();
                break;
            case 7:
                cout<<"\nExiting...";
                break;
            default:
                cout<<"\nInvalid choice";
        }
    }while(choice!=7);
}
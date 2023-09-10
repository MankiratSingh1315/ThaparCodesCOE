#include <iostream>
using namespace std;

class Stack{
    int top;
    int size;
    char *arr;
    public:
        Stack(int size){
            this->size=size;
            top=-1;
            arr=new char[size];
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
                cout<<arr[i]<<"";
            }
        }
};

int main() {
    string str;
    cout<<"\nEnter a string: ";
    cin>>str;
    Stack s(str.length());
    for(unsigned int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    cout<<"\nReversed string: ";
    s.display();
    return 0;
}
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
    char str[100];
    cout<<"\nEnter the string: ";
    cin>>str;
    Stack s(sizeof(str)/sizeof(str[0]));
    bool flag=false;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(s.isEmpty()){
                flag=true;
            }

            char ch=s.pop();

            if((str[i]==')' && ch!='(') || (str[i]=='}' && ch!='{') || (str[i]==']' && ch!='[')){
                flag=true;
            }
        }
    }
    if(flag==false){
        cout<<"\nBalanced";
    }else{
        cout<<"\nNot Balanced";
    }
    return 0;
}
#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class linkedList{
public:
    node *head;
    linkedList(){
        head=NULL;
    }
    void insertNodeAtEnd(int value){
        node *newNode=new node;
        newNode->data=value;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
        }
        else{
            node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    void reverseList(){
        if(head==NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        node *prev=NULL;
        node *current=head;
        node *next=NULL;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }
    void displayList(){
        if(head==NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main() {
    linkedList l;
    l.insertNodeAtEnd(1);
    l.insertNodeAtEnd(2);
    l.insertNodeAtEnd(3);
    l.insertNodeAtEnd(4);
    cout<<"Original list: ";
    l.displayList();
    l.reverseList();
    cout<<"Reversed list: ";
    l.displayList();
    return 0;
}
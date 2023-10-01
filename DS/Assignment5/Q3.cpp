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
    void findMiddle(){
        if(head==NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        node *slow=head;
        node *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<"Middle element: "<<slow->data<<endl;

        // other method can be to iterate till last element and then iterate again till middle element which is very inefficient
    }
};

int main() {
    linkedList l;
    l.insertNodeAtEnd(1);
    l.insertNodeAtEnd(2);
    l.insertNodeAtEnd(3);
    l.insertNodeAtEnd(4);
    l.insertNodeAtEnd(5);
    l.findMiddle();
    return 0;
}
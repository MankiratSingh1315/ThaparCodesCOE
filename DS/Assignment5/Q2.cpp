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
    int countAndRemove(int key){
        int count=0;
        node *temp=head;
        while(temp!=NULL && temp->data==key){
            head=temp->next;
            delete temp;
            temp=head;
            count++;
        }
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->data==key){
                node *temp2=temp->next;
                temp->next=temp->next->next;
                delete temp2;
                count++;
            }
            else{
                temp=temp->next;
            }
        }
        return count;
    }
};

int main() {
    linkedList l;
    l.insertNodeAtEnd(3);
    l.insertNodeAtEnd(2);
    l.insertNodeAtEnd(1);
    l.insertNodeAtEnd(4);
    l.insertNodeAtEnd(1);
    l.insertNodeAtEnd(3);
    l.insertNodeAtEnd(1);
    int key=1;
    cout<<"Linked list: ";
    node *temp=l.head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    int count=l.countAndRemove(key);
    cout<<"Number of occurrences of "<<key<<": "<<count<<endl;
    cout<<"Linked list after deletion of "<<count<<" occurrences of "<<key<<": ";
    temp=l.head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return 0;
}
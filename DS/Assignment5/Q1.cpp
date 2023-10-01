#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
        node(int d){
            data = d;
            next = NULL;
        }
};

class linkedList{
    public:
        node *head;
        linkedList(){
            head = NULL;
        }
        void insertNodeAtEnd(int data);
        void insertNodeAtStart(int data);
        void display();
        void insertBetween(int data, int adjacentNode);
        void deleteFromBigenning();
        void deleteFromEnd();
        void deleteNodeNumber(int nodeNumber);
        void displayAll();
};

void linkedList::displayAll(){
    node *temp=head;
    while(temp!=NULL){
        cout << temp->data << "\t";
        temp=temp->next;
    }
}

void linkedList::deleteNodeNumber(int nodeNumber){
    node *temp=head;
    int count=1;
    while(count!=nodeNumber-1){
        temp=temp->next;
        count++;
    }
    node *temp2=temp->next;
    temp->next=temp->next->next;
    delete temp2;
}

void linkedList::deleteFromEnd(){
    node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node *temp2=temp->next;
    temp->next=NULL;
    delete temp2;
}

void linkedList::deleteFromBigenning(){
    node *temp=head;
    head=head->next;
    delete temp;
}

void linkedList::insertBetween(int data, int adjacentNode){
    node *newNode=new node(data);

    int choice;
    cout<<"Choose\n1. For adding before\n2. For adding after\n";
    cin>>choice;
    node *temp=head;
    switch(choice){
        case 1:
        cout<<"hello";
            while(temp->data!=adjacentNode && temp->next!=NULL){
                temp=temp->next;
            }
            cout<<temp->data;
            if (temp->next!=NULL){
                newNode->next=temp->next;
                temp->next=newNode;
                }else{cout<<"Node not found";}
            break;

        case 2:
            while(temp->data!=adjacentNode && temp->next!=NULL){
                temp=temp->next;
            }
            
            break;

        default:
            cout<<"Wrong choice";
            break;
    }
}

void linkedList::insertNodeAtEnd(int data){
    node *newNode=new node(data);
    if(head==NULL){
        head=newNode;
        return;
    }

    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void linkedList::display(){
    node *temp=head;
    while(temp!=NULL){
        cout << temp->data << "\t";
        temp=temp->next;
    }
}

void linkedList::insertNodeAtStart(int data){
    node *newNode=new node(data);
    if(head==NULL){
        head=newNode;
        return;
    }

    node *temp=head;
    // cout<<temp->data<<endl;
    head=newNode;
    newNode->next=temp;
}
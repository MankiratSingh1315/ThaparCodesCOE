#include <iostream>
using namespace std;

int arr[20];
int size;

void create(){
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: \n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void display(){
    for(int  i =0 ; i < size;i++){
        cout<<arr[i]<<", ";
    }
    cout<<"\n";
}

void insert(){
    cout<<"Enter the index to insert at : ";
    int index;
    cin>>index;
    cout<<"Enter the number to insert : ";
    int num;
    cin>>num;

    for(int i=size;i>=index;i--){
        arr[i]=arr[i-1];
        if(i==index){
            arr[i]=num;
        }
    }
    ++size;
}

void Delete(){
    cout<<"Enter the index to delete at : ";
    int index;
    cin>>index;
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    --size;
}

void linearSearch(){
    cout<<"Enter the number to search : ";
    int num;
    cin>>num;
    bool found=false;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            cout<<"Number at index "<<i<<endl;
            found=true;
        }
    }
    if(!found){
        cout<<"Number not found"<<endl;
    }
}

int main(){
    int option;
    while(true){
        cout<<"__MENU__\n1. Create\n2. Display\n3. Insert\n4. Delete\n5. Linear Serch\n6. EXIT\n";
        cin>>option;
        switch (option)
        {
        case 1:
            create();
            break;
        
        case 2:
            display();
            break;

        case 3:
            insert();
            break;

        case 4:
            Delete();
            break;

        case 5:
            linearSearch();
            break;

        case 6:
            break;

        default:
            cout<<"wrong option";
            break;
        }
        if(option==6){
            break;
        }
    }
}
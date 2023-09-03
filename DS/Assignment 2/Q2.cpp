#include <iostream>
using namespace std;

int main() {
    int arr[7]={ 64, 34, 25, 12, 22, 11, 90 };
    bool flag=false;
    for (int i=0;i<7;i++){
        flag=false;
        for(int j=i+1;j<7;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                flag=true;
            }
        }
        if(flag==false){
            cout<<"Already sorted\n"<<endl;
            break;
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
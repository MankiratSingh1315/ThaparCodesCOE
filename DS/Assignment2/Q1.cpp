#include <iostream>
using namespace std;

int main() {
    // int arr[8]={1,3,2,6,7,9,3,1};
    int search;
    cout<<"Enter number to search : ";
    cin>>search;
    bool found=false;
    // Linear search
    /* for(int i=0;i<8;i++){
        if(arr[i]==search){
            cout<<"Your number found at index "<<i<<endl;
            found=true;
        }
    } */

    //binary search
    int arr[8]={1,3,6,7,8,10,20,25};
    int start=0,end=8;
    while (start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==search){
            cout<<"Element found at index "<<mid<<endl;
            found=true;
            break;
        }else if(arr[mid]>search){
            end=mid;
        }else{
            start=mid;
        }
    }
    if(found==false){
        cout<<"Number Not found"<<endl;
    }
    return 0;
}
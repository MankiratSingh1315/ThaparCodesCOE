#include <iostream>
using namespace std;

int main() {
    int arr[7]={1,2,3,5,6,7,8};

    // using sum formula
    // int sum=0;
    // for(int i=0;i<7;i++){
    //     sum+=arr[i];
    // }
    // int n=arr[6];
    // int sum2=(n*(n+1))/2;
    // cout<<"Missing Number: "<<sum2-sum;
    // return 0;

    // using binary search
    int low=0,high=6,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==mid+1){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    cout<<"Missing Number: "<<low+1;
    return 0;
}
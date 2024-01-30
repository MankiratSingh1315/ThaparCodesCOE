#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int x){//for sorted arr only
    int start=0,end=size-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]<x){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;//if x does not exist in arr
}

int main(){
    int array[]={1,3,6,9,35,78,378};
    int N=sizeof(array)/sizeof(array[0]);
    int x=5;
    binarySearch(array,N,x)==-1?cout<<"Element not found":cout<<"Element at index "<<binarySearch(array,N,x);
}
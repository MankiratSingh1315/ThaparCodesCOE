#include<iostream>
using namespace std;

int main(){
    int arr[12]={1,2,2,3,3,3,3,4,6,4,3,6};
    int size=12;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                for (int t = j; t < size; t++)
                {
                    arr[t]=arr[t+1];
                }
                size--;
                j--;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}
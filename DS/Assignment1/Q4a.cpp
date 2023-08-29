// solution with time complexity O(n^2)
/*

#include <iostream>
using namespace std;

int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

*/

// solution with time complexity O(n)
#include <iostream>
using namespace std;

int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<4;i++){
        int temp=arr[i];
        arr[i]=arr[7-i];
        arr[7-i]=temp;
    }

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
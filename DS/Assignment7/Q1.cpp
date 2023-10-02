#include <iostream>
using namespace std;

void selectionSort(int *arr, int size){
    int minIndex;
    for(int i=0; i<size-1; i++){
        minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void insertionSort(int *arr, int size){
    for (int i=0;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

void bubbleSort(int *arr, int size){
    for (int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}

void merge(int *arr, int start, int mid, int end){
    int temp[end-start+1];
    int i=start,j=mid+1,k=0;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid){//for leftover i if j reaches end earlier
        temp[k++]=arr[i++];
    }
    while(j<=end){//for leftover j if i reaches mid earlier
        temp[k++]=arr[j++];
    }

    for(int k=0,i=start;k<(end-start+1);k++,i++){
        arr[i]=temp[k];
    }
}

void mergeSort(int *arr,int startIndex, int endIndex){
    if(startIndex>=endIndex){
        return;
    }
    int mid = startIndex + (endIndex-startIndex)/2;
    
    mergeSort(arr,startIndex, mid);
    mergeSort(arr,mid+1, endIndex);
    merge(arr,startIndex,mid,endIndex);
}

void display(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[], int si, int ei) {
    int pivot = arr[ei];
    int i = si-1; // makes space for elements smaller than pivot

    for(int j=si; j<ei; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    //place pivot at correct position
    i++;
    int temp = arr[i];
    arr[i] = pivot;
    arr[ei] = temp; //pivot's position need to change so (pivot = temp) won't work
    return i;
}

void quickSort(int arr[], int si, int ei) {
    // for end index as pivot
    if(si >= ei) {
        return;
    }

    //pivot variable stores correct idx for pivot element
    int pIdx = partition(arr, si, ei);
    quickSort(arr, si, pIdx-1);
    quickSort(arr, pIdx+1, ei); 
}





int main() {
    int arr[]={5, 3, 6, 12, 1};
    // selectionSort(arr, 5);
    // insertionSort(arr,5);
    // bubbleSort(arr,5);
    // mergeSort(arr,0,4);
    // quickSort(arr,0,4);
    display(arr, 5);
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void bubble(int arr[], int size){
    if(size==0){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble(arr,size-1);
}

int main() {
    int arr[5]={6,3,8,2,7};
    int size = end(arr)-begin(arr);
    bubble(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
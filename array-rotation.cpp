#include <iostream>
using namespace std;

void rotate(int arr[],int size, int n){
  if(n==0){
    
    return;
  }
  //storing the last element of the array
  int temp=arr[size-1];
  
  // shifting the first (size-n) elements of the original array to the right
  for(int i=size-1;i>0;i--){
    arr[i]=arr[i-1];
  }
  //copying the elements from the temp array to the beginning of the original array
  arr[0]=temp;
  rotate(arr,size,k-1);
}


int main() 
{
    int arr[]={2,5,7};
    int size = end(arr)-begin(arr);
    rotate(arr,size,1);
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}
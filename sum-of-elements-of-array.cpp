#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int sum, int size) {
  if (0 >= size) {
    return sum;
  }
  return sumOfArray(arr, sum+arr[size-1], size-1);
}


int main() 
{
  int arr[] = {10, 10, 7, 7, 6, 8};
  int size = end(arr)-begin(arr);
  cout<<sumOfArray(arr, 0, size)<<endl;
   
}
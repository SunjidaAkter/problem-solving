#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool rec(int arr[], int t, int size) {
  if (0 == size) {
    // char a="false";
    return false;
  }
  if (arr[size] == t) {
    // char b="true";
    return true;
  }
  return rec(arr, t, size-1);
}


int main() 
{
   int arr[] = {10, 12, 7, 7, 5, 8};
   int size = end(arr)-begin(arr);
   int t= 7;
   if(rec(arr, t, 5)==0){
    cout<<"false"<<endl;
   }else if(rec(arr, t, 5)==1){
     cout<<"true"<<endl;
   }
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fibo(int n,vector<int>&arr){
  if(n<=0){
    return ;
  }
  arr.push_back(n);
  
  fibo(n-1,arr);
  
}

int main() 
{
    int n;
    cin>>n;
  vector<int>arr;
  fibo(n,arr);
    for (int i = (arr.size()-1); i >=0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
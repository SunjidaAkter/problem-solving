#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
  if(n<=0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  
  int small1=fibo(n-1);
  int small2=fibo(n-2);
  return small1+small2;
}

int main() 
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}
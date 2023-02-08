#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factor(int n){
  if(n<=0){
    return 1;
  }
  return n*factor(n-1);
}

int main() 
{
    int n;
    cin>>n;
    cout<<factor(n)<<endl;
    return 0;
}
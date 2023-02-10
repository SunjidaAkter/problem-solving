#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int rec(int t, int sum) {
  if (0 >= t) {
    return sum;
  }
  return rec(t/10, sum+1);
}


int main() 
{
  int t=12223;
  cout<<rec(t, 0)<<endl;
   
}
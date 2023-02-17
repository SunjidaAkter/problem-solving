#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sub_seq(string str, string output){
  if(str.size()==0){
    cout<<output<<endl;
    return;
  }
  sub_seq(str.substr(1),output);
  sub_seq(str.substr(1),output+str[0]);
}

int main() 
{
    string str="abc";
    sub_seq(str,"");
    return 0;
}
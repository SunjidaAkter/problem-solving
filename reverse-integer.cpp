#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int ans=0;
while(n!=0){
    int digit=n%10;
    // cout<<bit<<endl;
    ans=(ans*10)+digit;//reverse flow method for decimal
    n=n/10;
}
cout<<ans;
return 0;    
    
}
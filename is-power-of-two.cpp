#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=1;
    int b=0;
    for(int i=0;i<=29;i++){
        if(n==a){
            cout<<"true";
            b=1;
        }
        a=a*2;
    }
    if(b==0){
            cout<<"false";
    }
    return 0;
}
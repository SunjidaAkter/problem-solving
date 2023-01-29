//input 234
/*
process
prod=2*3*4=24
sum=2+3+4=9
subtact=prod-sum=24-9=15
*/
//output 15

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int prod=1;
    int sum=0;
    while(n!=0){
        int digit=n%10;

        prod*=digit;
        sum+=digit;

        n/=10;
    }
    int sub=prod-sum;
    cout<<sub;

    return 0;
}
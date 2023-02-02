//input 101
/*
algo
1.get the right digit 
2.apply ans=(digit* 2^i)+ans method where i iterate number
3.right shift the given binary one time
4.increase i by 1
4.repeat this three steps untill n!=0
*/

#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int ans=0, i=0;
    while(n!=0){
        int digit =n%10;
        ans=(digit*pow(2,i))+ans;
        n=n/10;
        i++;
    }
    cout<<ans;
    return 0;
}
//output 5
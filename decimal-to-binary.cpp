//input 7
/*
algo
1.divide by 2
2.store the reminder
3.repeat this two steps untill n!=0
4.reverse answer
*/

/*
another algo
1.input the value of decimal n
2.store ans and i as 0
3. finding bit by & operatorwith 1
4.apply ans=bit*10^i+ans method where i is an iterative increased by 1
5.right shift n one time
6.repeat 3,4,5 untill n!=0
7.print ans
*/
//output 111

#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
float ans=0;
int i=0;
while(n!=0){
    int bit=n&1;
    // cout<<bit<<endl;
    ans=(bit*pow(10,i))+ans;//reverse flow method and the same flow method (if needed) is ans=(ans*10)+digit 
    i++;
    n=n>>1;
}
cout<<ans;
return 0;    
    
}
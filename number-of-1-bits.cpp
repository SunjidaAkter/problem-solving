//input 00000000000000000000000000001011/32bytes number
/* 
the number of 1 in a 32 bytes binary integer = 4
*/
//output 4
#include<bits/stdc++.h>
using namespace std;

int main(){
    uint32_t n=00000000000000000000010000011111;

int count=0;
while(n!=0){
    if(n&1){
        count=count+1;
    }
    n=n>>1;
}
cout<<count;

    return 0;
}
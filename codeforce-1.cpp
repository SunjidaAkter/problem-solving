// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int queries;
    cin>>queries;
    int count=0;
    while(queries>0){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }
        queries--;
    }
    cout << count;

    return 0;
}
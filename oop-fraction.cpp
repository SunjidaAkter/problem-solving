// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Fraction{
    private:
    
        int numerator;
        int denominator;
    
    public:
    
        Fraction(int numerator, int denominator){
            this -> numerator=numerator;
            this -> denominator=denominator;
        }
        
        void print(){
            cout << numerator<< "/" << denominator << endl;
        }
        
        
}


int main() {
    cout << "Hello world!";

    return 0;
}
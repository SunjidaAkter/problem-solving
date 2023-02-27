// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    
        int real;
        int imaginary;
    
    public:
    
        Complex(int real, int imaginary){
            this -> real=real;
            this -> imaginary=imaginary;
        }
        
        void print(){
            cout << real<< "+i" << imaginary << endl;
        }
        
        // void simplify(){
        //     int gcd=1;
        //     int j=min(numerator,denominator);
        //     for(int i=1;i<=j;i++){
        //         if(numerator%i==0 && denominator%i==0){
        //             gcd=i;
        //         }
        //     }
        //     numerator=numerator/gcd;
        //     denominator=denominator/gcd;
        // }
        
        // void prod(Complex f2){
        //     real=real+f2.real-imaginary*f2.imaginary;
        //     imaginary=real*f2.imaginary+f2.real*imaginary;
        // }
        void add(Complex f2){
            real=real+f2.real;
            imaginary=imaginary+f2.imaginary;
        }
        
};


int main() {
    Complex f1(10,2);
    Complex f2(15,4);
    
    f1.add(f2);
    // f1.prod(f2);
    f1.print();

    return 0;
}
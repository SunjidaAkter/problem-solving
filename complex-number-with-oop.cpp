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
            if(imaginary>0){
                cout<< real<< "+i" << imaginary << endl;
            }else if(imaginary<0){
                cout<< real<< "-i" <<((-1)* imaginary) << endl;
            }else{
                cout<<real<<endl;
            }
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
        
        void prod(Complex f2){
            int x1=real;
            int x2=f2.real;
            int y1=imaginary;
            int y2=f2.imaginary;
            real=x1*x2-y1*y2;
            imaginary=x1*y2+x2*y1;
        }
        void add(Complex f2){
            real=real+f2.real;
            imaginary=imaginary+f2.imaginary;
        }
        
};


int main() {
    Complex f1(3,4);
    Complex f2(3,-4);
    int choice;
    
    cin>>choice;
    if(choice==0){
        f1.prod(f2);
        f1.print();
    }else {
        f1.add(f2);
        f1.print();
        
    }
    

    return 0;
}
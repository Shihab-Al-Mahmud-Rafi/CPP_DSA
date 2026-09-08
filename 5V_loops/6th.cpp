#include<iostream>
using namespace std;

int main(){

    int n;
    while(1){
        cout<<"Enter a number: ";
        cin>>n;
        if(n==0)break;
        int add=0, mul=1,rem;
        for(;n!=0;n=n/10){
            rem=n%10;
            add+=rem;
            mul*=rem;
        }
        cout<<"Addition of the digits: "<<add<<endl;
        cout<<"Multiplication of the digits: "<<mul<<endl;
    }
}
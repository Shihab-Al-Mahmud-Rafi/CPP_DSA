#include<iostream>
using namespace std;

bool isPrime(int a){

    if(a<=1){
        return false;
    }

    else
    {
        for(int i=2;i<a;i++){
            if(a%i==0){
               return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    while(1){
        cout<<"Enter a number to check(-1 to end): ";
        cin>>n;
        if(n==-1)break;
        if(isPrime(n)){
            cout<<"This is a prime number.\n\n";
        }
        else{
            cout<<"This is not a prime number.\n\n";
        }
    }
    
}
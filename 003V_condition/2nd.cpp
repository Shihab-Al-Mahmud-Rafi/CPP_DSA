#include<iostream>
#include<stdbool.h>
using namespace std;



bool isEven(int a);
bool isPrime(int a);

int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int sum=0;

    for(int i=2;i<=n;i+=2){
        sum+=i;
    }
    cout<<"Total sum is of even number is: "<<sum<<endl;

    int s;
    cout<<"Enter another number: ";
   
    // if(s<0){
    //     cout<<"Numbers can't be negetive"<<endl;
    // }
    // else if(isEven(s)){
    //     cout<<"This is an even number."<<endl;
    // }
    // else{
    //     cout<<"This is an odd number."<<endl;
    // }
    
    while(1){

        cin>>s;
        if(s==-100)break;
        if(isPrime(s)){
        cout<<"This is a prime number."<<endl;
    }
    else{
        cout<<"This is not a prime number."<<endl;
    }
    cout<<"Again: ";
    }
    return 0;
}

bool isEven(int a){
    return (a%2==0);
}

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
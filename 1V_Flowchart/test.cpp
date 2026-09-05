#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    if(num<0 || num >100){
        cout<<"Numbers must be non negetive and below or equal to hundred."<<endl;
    }
    else if(num>=90){
         cout<<"A"<<endl;
    }
    else if(num>=80){
         cout<<"B"<<endl;
    }
    else if(num>=70){
         cout<<"C"<<endl;
    }
    else if(num>=60){
         cout<<"D"<<endl;
    }
    else{
        cout<<"F"<<endl;
    }
       
}
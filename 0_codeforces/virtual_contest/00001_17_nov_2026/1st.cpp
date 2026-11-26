#include<iostream>
using namespace std;


bool inEven(int n){
    if(n%2==0) return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    
    if(n>2 && inEven(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}
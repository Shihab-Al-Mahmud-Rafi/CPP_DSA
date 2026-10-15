#include<iostream>
using namespace std;

int pow2(int n){
    if(n==0) return 1;
    return 2*pow2(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<"Ans: "<<pow2(n)<<endl;
    return 0;
}
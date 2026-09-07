#include<iostream>
using namespace std;

int main(){
    int n,rem;
    cout<<"Enter the quantity of fibonacci series: ";
    cin>>n;
    for(int i=1, a=0, b=1; i<n; i++){
        if(i==1){
            cout<<a<<", "<<b;
            continue;
        }
        rem=b;
        b=a+b;
        a=rem;
        cout<<", "<<b;
    }
    cout<<"\nHere are your fibonacci numbers above."<<endl;

}
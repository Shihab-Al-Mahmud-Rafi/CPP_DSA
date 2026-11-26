#include<iostream>
using namespace std;

int main(){
    int n;
    while(1){
        cout<<"Enter a range: ";
        cin>>n;
        for(int i=n;i>=1;i--){
            for(int j=n;j>=i;j--){
                cout<<j<<" ";
            }
            cout<<'\n';
        }
    }
}
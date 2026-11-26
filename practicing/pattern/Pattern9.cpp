#include<iostream>
using namespace std;

int main(){
    int n;
    while(1){
        cout<<"Enter a range: ";
        cin>>n;
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<i<<" ";
            }
            cout<<'\n';
        }
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter range: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=(i*n)+1;j<=n*(i+1);j++){
            cout<<j<<" ";
        }
        cout<<'\n';
    }
    
}

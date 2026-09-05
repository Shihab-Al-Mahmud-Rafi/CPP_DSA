#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter range: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>1){
                cout<<", ";
            }
            cout<<j;
        }
        cout<<'\n';
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    while(1){
        cout<<"Enter a range: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                cout<<i<<" ";
            }
            cout<<'\n';
        }
    }
}
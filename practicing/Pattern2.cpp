#include<iostream>
using namespace std;

int main(){
    int n,num;
    while(1){
        cout<<"Enter a range: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            num=1;
            for(int j=i;j<=n;j++){
                cout<<num<<" ";
                num++;
            }
            cout<<'\n';
        }
    }
}
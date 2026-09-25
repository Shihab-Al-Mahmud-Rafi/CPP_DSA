#include<iostream>
using namespace std;

int main(){
    int n,star;
    while(1){
    cout<<"Enter range: ";
    cin>>n;
    if(n==0)break;
    for(int line=0;line<n;line++){
        for(star=0;star<=line;star++){
            cout<<"* ";
        }
        cout<<'\n';
    }
    }
    cout<<"System finished and closed."<<endl;
}
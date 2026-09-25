#include<iostream>
using namespace std;

int main(){
    int n,line,num, count=1;
    while(1){
        cout<<"Enter range: ";
        cin>>n;
        if(n==0)break;
        for(line=0;line<n;line++){
            for(num=0;num<=line;num++){
                cout<<count<<" ";
            }
            count++;
            cout<<'\n';
        }
        count=1;
        cout<<"Wanna do again??!!??"<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n, line,count;
    while(1){
        cout<<"Enter range: ";
        cin>>n;
        if(n==0)break;
        for(line=0;line<n;line++){
            count=line+1;
            for(int j=0;j<=line;j++){
                cout<<count<<" ";
                count++;

            }
            cout<<'\n';
        }
    }
    return 0;
}
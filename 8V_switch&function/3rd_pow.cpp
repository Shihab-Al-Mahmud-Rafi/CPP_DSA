#include<iostream>
using namespace std;

int pow(int a, int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }
    return ans;//as the function is int type, the return should be also in int type.
}

int main(){
    int a,b;
    while(1){
        cin>>a>>b;
        if(a==0)break;
        cout<<pow(a,b)<<endl<<endl;
    }
}
#include<iostream>
#include<math.h>
using namespace std;

bool check(int n){
    int bin;
    while(n!=0){
        bin=n%10;
        n=n/10;
        if(bin==0 || bin==1)continue;
        else{return false;} 
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    if(!check(n)){
        cout<<"Enter a proper binary number."<<endl;
        return 0;
    }
    int ans=0,digit;
    for(int i=0;n!=0;n=n/10,i++){
        digit=n%10;
        if(digit==1){
            ans+=pow(2,i);
        }

    }
    cout<<"Decimal is: "<<ans<<endl;
}
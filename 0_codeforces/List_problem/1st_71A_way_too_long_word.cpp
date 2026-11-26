#include<iostream>
#include<algorithm>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a[3];
        arrInput(a,3);
        sort(a,a+3);
        if(a[0]>0 && a[1]==a[2]-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
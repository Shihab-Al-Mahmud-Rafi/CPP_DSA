#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter total index number: ";
    cin>>n;
    if(n<=0){cout<<"Invalid input."<<endl;return 0;}
    int arr[n],b1,s1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            b1=arr[0];
            s1=arr[0];
            continue;
        }
        if(b1<arr[i]){
            b1=arr[i];
        }
        if(s1>arr[i]){
            s1=arr[i];
        }
    }

    cout<<"Biggest: "<<b1<<endl;
    cout<<"Smallest: "<<s1<<endl;
    return 0;
}
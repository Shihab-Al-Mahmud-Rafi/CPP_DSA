#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Total index: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double average= static_cast<double>(sum)/n;
    cout<<"Total is: "<<sum<<endl;
    cout<<"Average is :"<<average<<endl;
    return 0; 
}
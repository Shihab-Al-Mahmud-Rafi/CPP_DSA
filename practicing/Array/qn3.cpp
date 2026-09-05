#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter index number: ";
    cin>>n;
    int arr[n], rem;
    cout<<"Enter the first array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        rem=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=rem;
    }
    cout<<"The reverse array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
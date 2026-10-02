#include<iostream>
#include<climits>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int second_largest(int arr[], int n){
    int first=arr[0], second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]<first && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}

int main(){
    int n;
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Second Largest = "<<second_largest(num,n)<<endl;
    return 0;

}
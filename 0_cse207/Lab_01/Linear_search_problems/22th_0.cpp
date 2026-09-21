

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int maxNumber(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    return max;
}

int minNumber(int arr[], int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]) min=arr[i];
    }
    return min;
}

int maxDiff(int arr[], int n){
    int a= maxNumber(arr,n) - minNumber(arr,n);
    return a;
}

int main(){
    int n;
    cout<<"Enter the total index number: ";
    cin>>n;
    
    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Maximum difference: "<<maxDiff(num,n)<<endl;
    return 0;

}
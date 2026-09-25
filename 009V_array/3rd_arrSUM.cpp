#include<iostream>
using namespace std;

int arraySUM(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int arrInput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void arrPrint(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void revArr(int arr[], int n){
    int rem;
    for(int i=0; i<n/2;i++){
        rem=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=rem;
    }
}

int main(){
    int n, num[1000];
    cout<<"Enter size: ";
    cin>>n;
    arrInput(num,n);
    arrPrint(num,n);
    cout<<"Sum of array is: "<<arraySUM(num,n)<<endl;
    cout<<"Reverse of array is:"<<endl;
    revArr(num,n);
    arrPrint(num,n);

    
}
/*
Problem: Search an element in a sorted array using linear search.
Constraints: 1 ≤ N ≤ 1000
Sample Input:
Array = [1, 3, 5, 7, 9]
Target = 7
Sample Output:
3
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void arrPrint(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void arrSort(int arr[], int n){
    int idx, r;
    for(int i=0;i<n-1;i++){
        int rem=arr[i];
        for(int j=i+1;j<n;j++){
            if(rem>arr[j]){
                rem=arr[j];
                idx=j;
            }
        }
        if(rem!=arr[i]){
            r=arr[i];
            arr[i]=arr[idx];
            arr[idx]=r;
        }
    }
}

int findIndex(int arr[],int n, int tar){
    for(int i=0;i<n;i++){
        if(tar==arr[i]) return i;
    }
    return -1;
}

int main(){
    int n,tar;
    cout<<"Enter total index number: ";
    cin>>n;
    int num[n];
    
    cout<<"Enter the array: ";
    arrInput(num,n);

    arrSort(num,n);
    cout<<"The sorted array: ";
    arrPrint(num,n);

    cout<<"Enter the target number: ";
    cin>>tar;

    cout<<"Index of the target number is: "<<findIndex(num,n,tar)<<endl;
    return 0;


}
/*
Problem: Given an array where the last element is considered to be stored at index 0, the second last at index 1, and so on, search for a given target element by traversing the
array from the end. If the element is found, return its corresponding index based on this reverse indexing
system; otherwise, return –1. Constraints: 1 ≤ N ≤ 500
Sample Input:
Array = [10, 20, 30, 40]
Target = 20
Sample Output: 2
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int findIndex(int arr[],int n, int tar){
    for(int i=0;i<n;i++){
        if(tar==arr[i]) return i;
    }
    return -1;
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
    int n,tar;
    cout<<"Total index number: ";
    cin>>n;
    int num[n];
    arrInput(num,n);
    revArr(num,n);
    cout<<"Enter the target number: ";
    cin>>tar;
    if(findIndex(num,n,tar)==-1){
        cout<<"Target is not present."<<endl;
        return 0;
    }
    cout<<"Index of the target number is: "<<findIndex(num,n,tar)<<endl;
    return 0;

}






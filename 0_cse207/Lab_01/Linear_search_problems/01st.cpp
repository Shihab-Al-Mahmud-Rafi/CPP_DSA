/*
Problem: Given an array of integers and a target value, find the index of the target using
linear search. If not found, return -1.
Constraints: 1 ≤ N ≤ 100
Sample Input:
N = 5
Array = [4, 2, 7, 1, 9]
Target = 7
Sample Output:
2
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

int main(){
    int n,tar;
    cout<<"Total index number: ";
    cin>>n;
    int num[n];
    arrInput(num,n);
    cout<<"Enter the target number: ";
    cin>>tar;
    if(findIndex(num,n,tar)==-1){
        cout<<"Target is not present."<<endl;
        return 0;
    }
    cout<<"Index of the target number is: "<<findIndex(num,n,tar)<<endl;
    return 0;

}
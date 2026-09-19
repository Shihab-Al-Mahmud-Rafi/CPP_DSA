/*
Problem: Find the sum of indices where a target appears.
Constraints: 1 ≤ N ≤ 1000
Sample Input:
Array = [2, 4, 2, 6, 2]
Target = 2
Sample Output:
6
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int TargetSum(int arr[],int n, int tar){
    int sum=0;
    for(int i=0;i<n;i++){
        if(tar==arr[i]) sum+=tar;
    }
    return sum;
}

int main(){
    int n,tar;
    cout<<"Enter total index number: ";
    cin>>n;
    int num[n];

    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Enter the target: ";
    cin>>tar;
    
    cout<<"Sum of indices where a target appears: "<<TargetSum(num,n,tar)<<endl;
    return 0;
}
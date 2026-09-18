/*
Problem: Find the last occurrence index of a target value.
Constraints: 1 ≤ N ≤ 10^4
Sample Input:
Array = [5, 6, 5, 6, 7]
Target = 6
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

int findIndex(int arr[],int n, int tar){
    int idx=0;
    for(int i=0;i<n;i++){
        if(tar==arr[i]) idx=i;
    }
    return idx;
}

int main(){
    int n,tar;
    cout<<"Total index number: ";
    cin>>n;
    int num[n];
    arrInput(num,n);
    cout<<"Enter the target number: ";
    cin>>tar;
    if(findIndex(num,n,tar)==0){
        cout<<"Target is not present."<<endl;
        return 0;
    }
    cout<<"Last index of the target number is: "<<findIndex(num,n,tar)<<endl;
    return 0;

}
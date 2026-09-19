/*
Problem: Check if a number appears more than once using linear search.
Constraints: 1 ≤ N ≤ 1000
Sample Input:
Array = [1, 2, 3, 2, 4]
Target = 2
Sample Output:
Yes
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

bool indexFreq(int arr[], int n, int tar){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==tar) count++;
    }
    if(count>1){
        return true;
    }
    return false;
}

int main(){
    int n,tar;
    cout<<"Enter index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Enter a target number: ";
    cin>>tar;

    if(indexFreq(num,n,tar)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
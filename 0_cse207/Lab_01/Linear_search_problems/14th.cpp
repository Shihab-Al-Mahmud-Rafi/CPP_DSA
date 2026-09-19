/*
Problem: Find the first negative number in an array.
Constraints: 1 ≤ N ≤ 1000
Sample Input:
Array = [4, 6, -2, 8]
Sample Output: -2
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int findNeg(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<0) return arr[i];
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter index number: ";
    cin>>n;
    int num[n];

    cout<<"Enter the array: ";
    arrInput(num,n);

    if(findNeg(num,n)==-1){
        cout<<"There is no negetive number.";
        return 0;
    }
    cout<<"The first negative number is: "<<findNeg(num,n)<<endl;
    return 0;
}
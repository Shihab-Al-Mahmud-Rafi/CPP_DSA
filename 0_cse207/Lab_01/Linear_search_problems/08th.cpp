/*
Problem: Find the first even number in an array.
Constraints: 1 ≤ N ≤ 1000
Sample Input:
Array = [3, 7, 5, 8, 9]
Sample Output:
8
*/

#include<iostream>
using namespace std;

bool isEven(int n){
    if(n&1) {
        return false;
    }
    return true;
}

int firstEven(int arr[],int n){
    for(int i=0;i<n;i++){
        if(isEven(arr[i])){
            return arr[i];
        }
    }
    return -1;
}

void arrInput(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter total index number: ";
    cin>>n;
    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);
    if(firstEven(num,n)==-1){
        cout<<"There is no even number."<<endl;
        return 0;
    }
    cout<<"First even number is: "<<firstEven(num,n)<<endl;
    return 0;


}
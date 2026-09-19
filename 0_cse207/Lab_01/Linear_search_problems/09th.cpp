/*
Problem: Count the total odd numbers in an array.
Constraints: 1 ≤ N ≤ 1000
Sample Input:
Array = [3, 7, 5, 8, 9]
Sample Output:
4
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

bool isEven(int n){
    if(n&1) {
        return false;
    }
    return true;
}

int countOdd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(!isEven(arr[i])){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter total index number: ";
    cin>>n;
    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);
    if(countOdd(num,n)==0){
        cout<<"There is no odd number."<<endl;
        return 0;
    }
    cout<<"Total odd number is: "<<countOdd(num,n)<<endl;
    return 0;
}
/*
Problem: Find the minimum value in an array using linear search.
Constraints: 1 ≤ N ≤ 10^5
Sample Input:
Array = [8, 3, 6, 2, 9]
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

int isMin(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(){

    int n;
    cout<<"Enter total index: ";
    cin>>n;
    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);
    cout<<"Minimum value in the array is: "<<isMin(num,n)<<endl;
    return 0;

}
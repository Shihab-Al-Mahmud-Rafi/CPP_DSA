/*
Problem: Find the maximum value in an array using linear search.
Constraints: 1 ≤ N ≤ 10^5
Sample Input:
Array = [8, 3, 6, 2, 9]
Sample Output:
9
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int isMax(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main(){

    int n;
    cout<<"Enter total index: ";
    cin>>n;
    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);
    cout<<"Maximum value in the array is: "<<isMax(num,n)<<endl;
    return 0;

}
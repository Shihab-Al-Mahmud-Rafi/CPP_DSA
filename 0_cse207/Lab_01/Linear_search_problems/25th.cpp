/*
Problem:
Given two target values X and Y, find the minimum index distance between their
occurrences in the array. If either is missing, return -1.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [3, 5, 4, 2, 6, 5, 6, 4, 8]
X = 5, Y = 6
Sample Output:
1
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
}

int main(){
    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    //Not finished.
}
/*
Problem:
Find the index of the first element that breaks ascending order.
If the array is sorted, return -1.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [1, 2, 3, 5, 4, 6]
Sample Output:
4
*/

#include<iostream>
using namespace std;

void arrInput(int arr[],int n){
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
}

int breakAsc(int arr[], int n){
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]) return i+1;
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Output: "<<breakAsc(num,n)<<endl;
    return 0;
    
}
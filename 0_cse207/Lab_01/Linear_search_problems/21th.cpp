/*
Problem:
Find the index of a peak element (greater than its immediate neighbors). Assume the first 
and last elements have only one neighbor.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [1, 3, 20, 4, 1, 0]
Sample Output:
2
*/
//1, 10, 3, 2, 20, 4
#include<iostream>
using namespace std;

void arrInput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int Peak(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i==0 && arr[i]>arr[i+1]) return i;
        else if(i==n-1 && arr[i]>arr[n-2]) return i;
        else{
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) return i;
        }
    }
}

int main(){

    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Index of the first peak element: "<<Peak(num,n)<<endl;
    return 0;
    

}
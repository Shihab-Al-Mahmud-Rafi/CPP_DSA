/*
Problem:
Find the first element that appears exactly K times in the array. If none exists, return -1.
Constraints:
1 ≤ N ≤ 10⁴
Sample Input:
Array = [1, 2, 2, 3, 3, 3]
K = 2
Sample Output:
2
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int something(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0; j<n;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count==k) return arr[i];
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

    int k;
    cout<<"Times: ";
    cin>>k;

    if(something(num,n,k)==-1){
        cout<<"No element appears "<<k<<" times."<<endl;
        return 0;
    }
    cout<<"Output: "<<something(num,n,k)<<endl;
    return 0;



}
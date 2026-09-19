/*
Problem:
Find the index of the second largest distinct element in the array using linear search. If it 
does not exist, return -1.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [4, 7, 2, 7, 5]
Sample Output: 4
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int secondLar(int arr[], int n){
    int min,rem,idx;
    for(int i=0;i<2;i++){
        min=arr[i];
        for(int j=i+1;j<n;j++){
            if(min>arr[j]) {
                min=arr[j];
                idx=j;
            }
        }
        if(min!=arr[i]){
            rem=arr[i];
            arr[i]=arr[idx];
            arr[idx]=rem;
        }
    }
    return arr[1];
}

int main(){
    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"The second largest is "<<secondLar(num,n)<<endl;
    return 0;
}
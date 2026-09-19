/*
Problem: Search a target only between given index range.
Constraints: 1 ≤ N ≤ 1000
Sample Input:
Array = [5, 10, 15, 20, 25]
Target = 20
Range = 1 to 3
Sample Output:
3
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int findIndex(int arr[], int r1, int r2, int tar){
    if(r1<r2){
        for(int i=r1;i<=r2;i++){
            if(tar==arr[i]) return i;
        }
    }
    else {
        for(int i=r1;i>=r2;i--){
            if(tar==arr[i]) return i;
        }
    }
    return -1;
}

int main(){
    int n,tar;
    cout<<"Total index number: ";
    cin>>n;
    int num[n];

    cout<<"Enter the array: ";
    arrInput(num,n);
    
    cout<<"Enter the target number: ";
    cin>>tar;

    int range1,range2;
    cout<<"Enter range:"<<endl; cin>>range1; cout<<"to "; cin>>range2;

    if(findIndex(num,range1,range2, tar)==-1){
        cout<<"Target is not present."<<endl;
        return 0;
    }
    cout<<"Index of the target number is: "<<findIndex(num,range1,range2,tar)<<endl;
    return 0;

}
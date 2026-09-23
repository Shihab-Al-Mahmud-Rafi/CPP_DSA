/*
Problem:
Find the element that has the minimum absolute difference with a given target.
If multiple elements qualify, return the one with the largest value.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [1, 3, 5, 7]
Target = 6
Sample Output:
5
*/

#include<iostream>
#include<vector>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int isMax(const vector<int>& arr){
    int n=arr.size(), max=arr[0];
    for(int i=0; i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    return max;
}

int absoluteDiff(int arr[], int n, int k){
    int diff,min;
    vector<int>idx;
    for(int i=0;i<n;i++){
        if(k<=arr[i]){
            diff=arr[i]-k;
        }
        else diff=k-arr[i];
        if(i==0) {
            min=diff;
        }
        if(min>diff) {
            min=diff;
        }

    }
    for(int i=0;i<n;i++){
        if(k<=arr[i]){
            if(min==arr[i]-k) idx.push_back(arr[i]);
        }
        else{
            if(min==k-arr[i]) idx.push_back(arr[i]);
        }
    }
    int max=isMax(idx);
    return max;
}

int main(){
    int n;
    cout<<"Enetr total index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    int k;
    cout<<"Enter the target: ";
    cin>>k;

    cout<<"Output: "<<absoluteDiff(num,n,k)<<endl;
    return 0;

}


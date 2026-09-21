/*
Problem:
Find the maximum difference Array[j] − Array[i] such that j > i using linear search.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [2, 3, 10, 6, 4, 8, 1]
Sample Output:
8
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int maxDiff(int arr[], int n){
    int ans=arr[1]-arr[0],diff,diff2;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(j==i+1) {diff=arr[j]-arr[i]; continue;}
            diff2=arr[j]-arr[i];
            if(diff<diff2){
                diff=diff2;
            }
        }
        if(ans<diff){
            ans=diff;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the total index number: ";
    cin>>n;
    
    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Maximum difference: "<<maxDiff(num,n)<<endl;
    return 0;

}
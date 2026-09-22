/*
Problem:
Find the index up to which the prefix sum is maximum.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [2, -1, 3, -2, 4]
Sample Output:
4
*/

#include<iostream>
using namespace std;

void arrrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int cumulativeSum(int arr[], int n){
    int idx=0, sum=0, ans;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(i==0){
             ans=sum;
             continue;
        }
        if(ans<sum){
            ans=sum;
            idx=i;
        }
    }
    return idx;
}

int main(){
    int n;
    cout<<"Total index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrrInput(num,n);

    cout<<"Output: "<<cumulativeSum(num,n)<<endl;
    return 0;



}


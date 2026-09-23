/*
Problem:
Count how many elements are equal to the product of their immediate neighbors.
Constraints:
3 ≤ N ≤ 10⁵
Sample Input:
Array = [2, 3, 6, 2]
Sample Output:
1
*/

#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int check(vector<int> arr, int n){
    int count=0;
    for(int i=1;i<n-1;i++){
        if(arr[i]==arr[i-1]*arr[i+1]) count++;
    }
    return count;
}

int main(){

    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    vector<int> num(n);
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Output: "<<check(num,n)<<endl;
    return 0;



}
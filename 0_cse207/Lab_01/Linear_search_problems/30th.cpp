/*
Find the length of the longest strictly increasing prefix of the array.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [1, 2, 3, 2, 5]
Sample Output:
3
*/

#include<iostream>
using namespace std;

void arrInput(int arr[],int n){
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
}

int increasingPrefix(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]) return i+1;
    }
    return n;
}

int main(){

    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Output: "<<increasingPrefix(num,n)<<endl;
    return 0;
    
}
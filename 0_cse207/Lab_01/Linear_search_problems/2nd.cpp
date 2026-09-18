/*

Problem: Find how many times a given integer appears in an array using linear search.
Constraints: 1 ≤ N ≤ 1000
Sample Input:
Array = [1, 2, 3, 2, 2, 5]
Target = 2
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

int freqNumber(int arr[],int n, int tar){
    int count=0;
    for(int i=0;i<n;i++){
        if(tar==arr[i]) count++;
    }
    return count;
}

int main(){
    int n,tar;
    cout<<"Total index number: ";
    cin>>n;
    int num[n];
    arrInput(num,n);
    cout<<"Enter the target number: ";
    cin>>tar;
    cout<<"The target number "<<tar<<" appears "<<freqNumber(num,n,tar)<<" times."<<endl;
    return 0;

}
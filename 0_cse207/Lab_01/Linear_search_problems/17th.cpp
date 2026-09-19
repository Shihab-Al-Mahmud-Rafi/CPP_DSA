/*
Problem:
Find the element whose value is closest to a given target. If multiple elements are equally 
close, return the one with the smallest index.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [1, 4, 6, 8]
Target = 5
Sample Output:
4
*/

#include<iostream>
using namespace std;

void arrInput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int closeValue(int arr[],int n,int tar){
    int f, tar1=tar;
    for(int i=1; ;i++){
        tar=tar-1;
        tar1=tar1+1;
        for(int j=0;j<n;j++){
            if(tar==arr[j] || tar1==arr[j]){
                return arr[j];
            }
        }
    }
}

int main(){
    int n,tar;
    cout<<"Enter index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Enter the target: ";
    cin>>tar;

    cout<<"Closest value of the target is: "<<closeValue(num,n,tar)<<endl;
    return 0;



}
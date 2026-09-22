/*
Problem:
Find the first element in the array whose frequency is a prime number. If none exists, 
return -1.
Constraints:
1 ≤ N ≤ 10⁴
Sample Input:
Array = [2, 3, 2, 3, 3, 4]
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

bool isPrime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0) return false;
    }
    return true;
}

int donno(int arr[], int n){
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(isPrime(count)) return arr[i];
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

    if(donno(num,n)==-1){
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<"Output: "<<donno(num,n)<<endl;
    return 0;



}
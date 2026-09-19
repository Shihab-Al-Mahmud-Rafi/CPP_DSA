/*
Check whether an element appears more than N/2 times in the array using linear search. 
Print the element if it exists, otherwise print -1.
Constraints:
1 ≤ N ≤ 10⁴
Sample Input:
Array = [3, 3, 4, 3, 3]
Sample Output:
3
*/

#include<iostream>
using namespace std;

void arrInput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int arrCheck(int arr[], int n){
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2) return arr[i];
    }
    return -1;
}

int main(){
    int n,tar;
    cout<<"Enter index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    if(arrCheck(num,n)==-1) {
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<"Sample output:\n"<<arrCheck(num,n)<<endl;
    return 0;
}
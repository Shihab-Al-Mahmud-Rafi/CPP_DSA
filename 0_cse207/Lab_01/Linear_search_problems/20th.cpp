/*
Problem:
Find the smallest positive integer missing from the array using linear search.
Constraints:
1 ≤ N ≤ 10⁴
Sample Input:
Array = [3, 4, -1, 1]
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

int smallInt(int arr[], int n){
    for(int i=1;;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(i==arr[j]) flag=1;
        }
        if(flag==0) return i;
    }
}

int main(){
    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    int num[n];
    cout<<"Sample Input:\nArray = ";
    arrInput(num,n);

    cout<<"Sample output:\n"<<smallInt(num,n)<<endl;
    return 0;

}
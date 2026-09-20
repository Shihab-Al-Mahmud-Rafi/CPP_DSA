/*
Problem:
Find the index of the first element that repeats later in the array. If no such element
exists, return -1.
Constraints:
1 ≤ N ≤ 10⁴
Sample Input:
Array = [10, 5, 3, 4, 3, 5, 6]
Sample Output:
1
*/

#include<iostream>
using namespace std;

void arrInput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int indexRep(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) return i;
        }
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

    if(indexRep(num,n)==-1) {cout<<"-1"<<endl; return 0;}
    cout<<"Sample output:\n"<<indexRep(num,n)<<endl;
    return 0;

 
}




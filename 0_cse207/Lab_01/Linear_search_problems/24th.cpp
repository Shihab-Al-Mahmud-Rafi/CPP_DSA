/*
Find the index of the first element that is greater than all elements to its left.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [2, 3, 5, 1, 7, 6]
Sample Output:
4
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int maxLeft(int arr[], int n){
    int flag;
    for(int i=n-1;i>0;i--){
        flag=1;
        for(int j=0;j<i;j++){
            if(arr[i]<=arr[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            return i;
        }

    }
    return -1;
}


int main(){
    int n;
    cout<<"Enter the total index number: ";
    cin>>n;
    
    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    if(maxLeft(num,n)==-1) {
        cout<<"No such number found."<<endl;
        return 0;
    }
    cout<<"Output: "<<maxLeft(num,n)<<endl;
    return 0;

}
/*
Problem:
Count how many elements are strictly smaller than every element to their right.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [5, 1, 4, 3, 6]
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

int nothing(int arr[], int n){
    int flag, count=0;
    for(int i=0;i<n-1;i++){
        flag=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                flag=0;
                break;
            }
        }
        if(flag==1) count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    cout<<"Output: "<<nothing(num,n)<<endl;
    return 0;

}
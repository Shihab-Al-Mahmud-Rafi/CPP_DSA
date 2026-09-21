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



int main(){
    int n;
    cout<<"Enter the total index number: ";
    cin>>n;
    
    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    //cout<<"Maximum difference: "<<maxDiff(num,n)<<endl;
    return 0;

}
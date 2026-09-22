/*
Problem:
Given two target values X and Y, find the minimum index distance between their
occurrences in the array. If either is missing, return -1.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [3, 5, 4, 2, 6, 5, 6, 4, 8]
X = 5, Y = 6
Sample Output:
1
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
}

int distance(int arr[], int n, int x, int y){
    int diff=0, diff2=0, count, ans=n;
    for(int i = 0; i < n; i++){
        count = 0;
        if(arr[i] == x){
            for(int j = 0; j < n; j++){
                if(arr[j] == y){
                    if(count == 0){
                        diff = j - i;
                        if(diff < 0) diff = (-1) * diff;
                        count++;
                    } else {
                        diff2 = j - i;
                        if(diff2 < 0) diff2 = (-1) * diff2;
                        if(diff > diff2){
                            diff = diff2;
                        }
                    }
                }
            }
            if(count > 0 && ans > diff){
                ans = diff;
            }
        }
    }
        
    return ans;
}

int main(){
    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    int num[n];
    cout<<"Enter the array: ";
    arrInput(num,n);

    int x,y;
    cout<<"Enter two target value:"<<endl;
    cin>>x>>y;

    cout<<"Output: "<<distance(num,n,x,y)<<endl;
    return 0;

    //not finished
}
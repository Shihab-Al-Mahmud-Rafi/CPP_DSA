/*
Problem:
Find the index of the first element greater than the average of all array elements.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [2, 4, 6, 8]
Sample Output:
2
*/

#include<iostream>
using namespace std;

void arrInput(int arr[], int n){
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
}

double arrAvg(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    double avg= 1.0*sum/n;
    //or double avg= double(sum)/n; C type cast
    //or double avg= (double)sum/n; Preferred option 
    //or double avg= static_cast<double>(sum)/n; preferred for industrial work;
    return avg;
}

int check(int arr[], int n){
    double a=arrAvg(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]>a) return i;
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

    if(check(num,n)==-1){
        cout<<"No element found."<<endl;
        return 0;
    }
    cout<<"Output: "<<check(num,n)<<endl;
    return 0;

}
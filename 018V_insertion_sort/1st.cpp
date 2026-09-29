#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void arrPrint(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort(vector<int>& arr){
    int n=arr.size();//not finished
}

int main(){
    int n;
    cout<<"Enter the index number: ";
    cin>>n;

    vector<int> num(n);
    cout<<"Enter the array: ";
    arrInput(num);

    cout<<"The sorted array: ";
    //bubbleSort(num);
    arrPrint(num);
    
    return 0;
}
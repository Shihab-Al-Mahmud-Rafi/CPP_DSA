//when the array size is small then we can use it.

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

void selectionSort(vector<int>& arr, int n ){
    for(int i=0;i<n-1;i++){
        int miniIndex=i;
        for(int j=i;j<n;j++){
            if(arr[miniIndex]>arr[j]){
                miniIndex=j;
            }
        }
        if(miniIndex!=i){
            int temp=arr[i];
            arr[i]=arr[miniIndex];
            arr[miniIndex]=temp;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the index number: ";
    cin>>n;

    vector<int> num(n);
    cout<<"Enter the array: ";
    arrInput(num);

    selectionSort(num,n);
    cout<<"Sorted array: ";
    arrPrint(num);
    
    return 0;

}
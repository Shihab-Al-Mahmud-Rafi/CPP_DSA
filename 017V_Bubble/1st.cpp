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

void bubbleSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        bool sorted=false;//optimizing
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sorted =true;
            }
           
        }
        if(sorted==false) break;
    }
}

int main(){
    int n;
    cout<<"Enter the index number: ";
    cin>>n;

    vector<int> num(n);
    cout<<"Enter the array: ";
    arrInput(num);

    cout<<"The sorted array: ";
    bubbleSort(num);
    arrPrint(num);
    
    return 0;

}
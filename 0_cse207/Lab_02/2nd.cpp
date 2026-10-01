#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void insertAt(vector<int>& arr, int key, int idx){
    int n=arr.size();
    arr.push_back(1);
    for(int i=n;i>=idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=key;
}

void arrPrint(const vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;

    vector<int> num(n);
    arrInput(num);

    int idx,key;
    cin>>idx>>key;

    insertAt(num,key,idx);
    arrPrint(num);
    return 0;




}
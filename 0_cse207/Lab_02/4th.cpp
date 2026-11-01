#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void arrPrint(const vector<int>& arr,int n){
    //int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int checkIdx(const vector<int>& arr, int key){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==key) return i;
    }
    return -1;
}

bool deleteAt(vector<int>& arr, int key) {
    int n = arr.size();
    int a = checkIdx(arr, key);

    if (a == -1) {
        return false;
    }

    for (int i = a; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr.pop_back();
    return true;
}

int main(){
    int n;
    cin>>n;

    vector<int> num(n);
    arrInput(num);

    int key;
    cin>>key;
    n=n-1;

    deleteAt(num,key);
    if (!deleteAt(num, key)) {
        cout << "Element is not present." << endl;
        return 0;
    }
    arrPrint(num,n);
    return 0;

}
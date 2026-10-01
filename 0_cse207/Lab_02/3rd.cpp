#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int checkIdx(const vector<int>& arr, int key){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==key) return i;
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter total index number: ";
    cin>>n;

    vector<int> num(n);
    arrInput(num);

    int key;
    cin>>key;

    if(checkIdx(num,key)==-1){
        cout<<"Not found."<<endl;
        return 0;
    }
    cout<<"Found at index: "<<checkIdx(num,key)<<endl;
    return 0;

}
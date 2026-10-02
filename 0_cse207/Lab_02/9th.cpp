#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void arrPrint(const vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void insert_at_index(vector<int>& arr,int idx, int key){
    int n=arr.size();
    arr.resize(n+1);
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=key;
}

int binary_search(vector<int>& arr, int key){
    int n=arr.size();
    int lower=0,upper=n-1, mid=lower+((upper-lower)/2);
    
    while(lower<=upper){
        if(arr[mid]==key) {
            return mid;
        }
        else if(key>arr[mid]){
            lower=mid+1;
        }
        else if(key<arr[mid]){
            upper=mid-1;
        }
        mid=lower+((upper-lower)/2);
    }
    int idx;
    for(int i=0;i<n;i++){
        idx=n;
        if(arr[i]>key) {
            idx=i;
            break;
        }
    }
    insert_at_index(arr,idx,key);
    return -1;

}

int main(){
    int n;
    cin>>n;

    vector<int> num(n);
    cout<<"Enter a sorted array: ";
    arrInput(num);

    int key;
    cin>>key;

    if(binary_search(num,key)==-1){
        cout<<key<<" not found."<<endl;
        cout<<"New sorted array is: ";
        arrPrint(num);
        return 0;
    }

    cout<<key<<" is found at index: "<<binary_search(num,key)<<endl;
    return 0;

}
#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void arrPrint(const vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void bubble_sorting(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        bool sort=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sort=true;
            }
        }
        if(!sort){
            return;
        }
    }
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
    return -1;
}

void delete_all_occurences(vector<int>& arr, int key){
    if(binary_search(arr,key)==-1){
        cout<<"Element "<<key<<" is not present."<<endl;
        return;
    }
    int n=arr.size(),idx=0;
    for(int i=0;i<n;i++){
        if(key!=arr[i]){
            arr[idx]=arr[i];
            idx++;
        }
    }
    arr.resize(idx);
}

int main(){
    int n;
    cin>>n;

    vector<int> num(n);
    cout<<"Enter the array: ";
    arrInput(num);

    int key,key2;
    cout<<"Delete: ";
    cin>>key;
    cout<<"Search: ";
    cin>>key2;

    cout<<"Sorted: ";
    bubble_sorting(num);
    arrPrint(num);

    delete_all_occurences(num,key);
    cout<<"After deletion: ";
    arrPrint(num);

    if(binary_search(num,key2)==-1){
        cout<<"Not present."<<endl;
        return 0;
    }
    cout<<key2<<" found at index "<<binary_search(num,key2)<<endl;
    return 0;
}
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
    }
}

// void deleting(vector<int>& arr,int& key){
//     int n=arr.size(),count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             for(int j=i;j<n-1;j++){
//                arr[j]=arr[j+1];
//             }
//             count++;
//         }
//     }
//     key=count;
// }

void deleting(vector<int>& arr,int key){
    int idx=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]!=key){
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
    arrInput(num);

    int key;
    cin>>key;

    deleting(num,key);
    n=key;

    arrPrint(num);cout<<endl;

    cout<<"New size: "<<num.size()<<endl;
    return 0;


}


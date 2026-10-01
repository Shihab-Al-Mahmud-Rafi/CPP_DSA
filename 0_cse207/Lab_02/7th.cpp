#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void arrPrint(const vector<int>& arr, int n){
    //int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void deleting(vector<int>& arr,int& key){
    int n=arr.size(),count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            for(int j=i;j<n;j++){
               arr[j]=arr[j+1];
            }
            count++;
        }
    }
    key=count;
}

int main(){

    int n;
    cin>>n;

    vector<int> num(n);
    arrInput(num);

    int key;
    cin>>key;

    deleting(num,key);
    n=n-key;

    arrPrint(num,n);cout<<endl;

    cout<<"New size: "<<n<<endl;
    return 0;


}


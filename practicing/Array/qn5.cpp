#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter total index: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    bool check[n];
    for(int i=0;i<n;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(check[i]==true) continue;
        
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                check[j]=true;
            }
        }
        cout<<arr[i]<<" has a frequency of "<<count<<" in this array."<<endl;
    }
}
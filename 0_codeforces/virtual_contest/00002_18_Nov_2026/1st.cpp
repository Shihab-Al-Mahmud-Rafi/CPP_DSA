#include<iostream>
#include<algorithm>
using namespace std;



int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr);
    }
}
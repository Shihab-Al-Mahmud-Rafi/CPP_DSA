#include<iostream>
#include<vector>
using namespace std;

int binarySearch(const vector<int>& arr,int key){
    int n=arr.size();
    int upper=n-1, lower=0;
    //int mid=(upper+lower)/2;//1. if we do this when out array is in the heap memeory, then integer overflow can happen.
    int mid=lower+(upper-lower)/2;
    while(lower<=upper){
        if(arr[mid]==key) return mid;

        if(key>arr[mid]){
            lower=mid+1;
        }
        if(key<arr[mid]){
            upper=mid-1;
        }
         mid=lower+(upper-lower)/2;
    }
    return -1;

}

int main(){
    vector<int> num={1,5,7,45,67,344};
    vector<int> odd={1,3,5,7,9};

    int index=binarySearch(num,5);

    cout<<"Index number is: "<<index<<endl;
    return 0;

    
}
//stil for the small arrays, we should use that.



#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void arrPrint(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort(vector<int> &arr){

    int n=arr.size();
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        for(int j = i-1; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { 
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}

int main(){
    int n;
    cout<<"Enter the index number: ";
    cin>>n;

    vector<int> num(n);
    cout<<"Enter the array: ";
    arrInput(num);

    cout<<"The sorted array: ";
    //insertionSort(num);
    arrPrint(num);
    
    return 0;
}
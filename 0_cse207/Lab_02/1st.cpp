#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void arrInput(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

pair<double,double> avgSum(const vector<int>& arr){
    int n=arr.size();
    double sum=0,avg=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    return{sum,avg};
}

int main(){
    int n;
    cin>>n;

    vector<int> num(n);
    arrInput(num);

    pair<double,double> a=avgSum(num);

    cout<<"Sum: "<<a.first<<endl;
    cout<<"Average: "<<a.second<<endl;
    return 0;

}
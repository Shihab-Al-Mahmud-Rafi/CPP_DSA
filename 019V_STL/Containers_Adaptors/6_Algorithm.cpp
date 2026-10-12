#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    //v.push_back(6);

    cout<<"Checking 6 : "<<binary_search(v.begin(), v.end(), 6)<<endl;//checks if 6 is present is not. 
   
    cout<<"Lower bound of 6: "<<lower_bound(v.begin(), v.end(),6)-v.begin()<<endl;
    cout<<"upper bound of 6: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=8;
    int b=10;
    cout<<"Max: "<<max(a,b);

    swap(a,b);
    cout<<"a-> "<<a<<endl;

    
    return 0;
}

/*
• lower_bound: Finds the first element that is greater than or equal to (\(\ge \)) your target value.
• upper_bound: Finds the first element that is strictly greater than (\(>\)) your target value.
*/
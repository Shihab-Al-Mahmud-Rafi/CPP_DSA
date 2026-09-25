#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a value: ";
    cin>>n;

    cout<<"Counting number from 1 to "<<n<<endl;
    for(int a=0, b=1;a>=0&&b>=1;a--,b--){
        cout<<a<<" "<<b<<endl;
    }
}
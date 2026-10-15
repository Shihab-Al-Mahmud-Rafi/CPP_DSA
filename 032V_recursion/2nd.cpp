#include<iostream>
using namespace std;

string arr[10]={"zero","one","two", "three","four", "five", "six","seven","eight","nine"};

void sayDigit(int n){
    if(n==0) return;
    int digit=n%10;
    sayDigit(n/10);
    cout<<arr[digit]<<" ";
}



int main(){

    int n;
    cin>>n;
    sayDigit(n);
    return 0;

}
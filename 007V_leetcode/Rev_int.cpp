//qn no. 7
#include<iostream>
using namespace std;

int reverse_Num(int n){
    int digit,num=0;
    for(;n!=0;n=n/10){
        digit=n%10;
        num=digit+num*10;
    }
    return num;
}

int main(){
    int n;
    cout<<"x = ";
    cin>>n;
    int rev=reverse_Num(n);
    cout<<rev<<endl;

}
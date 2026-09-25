#include<iostream>
#include<math.h>
using namespace std;

int main(){

    //double n,ans=0,bit;//1. We can't declared them as double cz '&' and '>>' operation can't be done with double variables.
    int n,ans=0,bit;
    cout<<"Enter a number to convert to binary: ";
    cin>>n;
    for (int i=0;n!=0; i++, n=n>>1){
        bit=n&1;
        ans=(round(pow(10,i))*bit)+ans;//2. The round() function takes a decimal (floating-point) number and rounds it to the nearest whole integer.
        //Because pow() function gives us a floting point number instead of integer, the result will be wrong so we have to use round function.

    }
    cout<<"Binary is: "<<ans<<endl;

}
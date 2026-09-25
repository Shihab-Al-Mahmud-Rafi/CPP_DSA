#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int number[15];
    int second[20]={5,7,11};
    printArray(second,20);//all the values other than the first three data, will be zero.

    int sizing= sizeof(second);
    cout << "SIZING is: "<<sizing/sizeof(int)<<endl;


}
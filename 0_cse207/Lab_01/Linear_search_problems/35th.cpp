/*
Problem:
Find the element with the highest frequency.
If multiple elements have the same maximum frequency, return the one with the smallest 
index.
Constraints:
1 ≤ N ≤ 10⁵
Sample Input:
Array = [4, 1, 2, 2, 3, 1, 1]
Sample Output:
1
*/

#include<iostream>
#include<vector>
using namespace std;

void arrInput(vector<int>& arr){
  int n=arr.size();
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
}

int main(){
  int n;
  cout<<"Enter total index number: ";
  cin>>n;

  vector<int> num(n);
  cout<<"Enter the array: ";
  arrInput(num);


}


































// #include<iostream>
// #include<vector>
// using namespace std;

// void arrInput(vector<int>& arr, int n){
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
// }

// int isMax(const vector<int>& arr, int n){
//   int max=arr[0];
//   for(int i=0; i<n;i++){
//     if(max<arr[i])max=arr[i];
//   }
//   return max;
// }

// int highFreq(const vector<int>& arr){
//   int n=arr.size(), max;
//   int m=isMax(arr,n)+1;
//   vector<int> freq(m,0);
//   for(int i=0;i<n;i++){
//     freq[arr[i]]++;
//   }
//   max=freq[0];
//   int idx=0;
//   for(int i=0;i<m;i++){
//     if(max<=arr[i]){
//       max=arr[i];
//       idx=i;
//     }
//   }
//   return idx;
// }

// int main(){
//   int n;
//   cout<<"Enter total index number: ";
//   cin>>n;

//   vector<int>num(n);
//   cout<<"enter the array: ";
//   arrInput(num,n);

//   cout<<"Output: "<<highFreq(num)<<endl;
//   return 0;


// }
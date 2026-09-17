//You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
//Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
//You need to find and return that number which is unique in the array/list.

#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

int main(){


}

/*

Step 1 (First Element = 3):
Code does: ans = ans ^ 3 (which is 0 ^ 3)
ans becomes 3
Step 2 (Second Element = 1):
Code does: ans = ans ^ 1 (which is 3 ^ 1)
ans becomes 2
Step 3 (Third Element = 4):
Code does: ans = ans ^ 4 (which is 2 ^ 4)
ans becomes 6
Step 4 (Fourth Element = 1):
Code does: ans = ans ^ 1 (which is 6 ^ 1)
ans becomes 7
Step 5 (Fifth Element = 3):
Code does: ans = ans ^ 3 (which is 7 ^ 3)
ans becomes 4


*/
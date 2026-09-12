//qn no. 231
//Power of two


// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0)return false;
//         while(n%2!=1){
//             n=n/2;
//         }
//         if(n==1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

//Method 2

#include<math.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){
            int ans=pow(2,i);
            if(ans==n)return true;
        }
        return false;
    }
};
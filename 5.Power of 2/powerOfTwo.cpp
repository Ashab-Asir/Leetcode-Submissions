//Problem link: https://leetcode.com/problems/power-of-two/
//My code:
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0){
            return false;
        }
        int count=0;
       while(n!=0){
           if(n&1){
               count=count+1;
           }
           n=n>>1;
       }
       if(count==1){
           return true;
       }
       else{
           return false;
       }
    }
};

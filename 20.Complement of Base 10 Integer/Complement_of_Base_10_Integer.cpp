// Problem Link: https://leetcode.com/problems/complement-of-base-10-integer/description/

//Approach

class Solution {
public:
    int bitwiseComplement(int n) {
      int mask=0;
      if(n==0){
          return 1;
      }
      int m=n;
      while(n!=0){
          mask=(mask<<1)|1;
          n=n>>1;
      }
      return (~m)&mask;
    }
};

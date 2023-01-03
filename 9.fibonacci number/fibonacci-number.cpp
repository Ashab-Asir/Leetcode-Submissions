// Problem Link: https://leetcode.com/problems/fibonacci-number/

// Approach 1:Using for loop:

class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int first=0,second=1,sum;

        for(int i=1;i<n;i++){
            sum=first+second;
            first=second;
            second=sum;
        }
        return sum;
    }
};

// Approach 2:Using recursion:

class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};

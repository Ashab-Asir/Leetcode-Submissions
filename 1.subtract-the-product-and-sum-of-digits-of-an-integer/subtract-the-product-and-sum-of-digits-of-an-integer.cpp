//Problem link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/

//My code:

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;
        while(n>0){
            int digit;
            digit=n%10;
            sum=sum+digit;
            product=product*digit;
            n=n/10;
        }
        return product-sum;
    }
};

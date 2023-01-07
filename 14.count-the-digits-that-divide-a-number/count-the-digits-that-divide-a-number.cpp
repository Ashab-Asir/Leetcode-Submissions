//Problem Link:https://leetcode.com/problems/count-the-digits-that-divide-a-number/

//Approach
class Solution {
public:
    int countDigits(int num) {
        int copynum=num;
        int count=0;
        while(num!=0){
            int digit=num%10;
            if(copynum%digit==0){
                count++;
            }
            num=num/10;
        }
        return count;
    }
};

//Problem link: https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1

//My solution:
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int count=0, copy_n=n,copy2_n=n;
        while(copy_n!=0){
            int digit=copy_n%10;
            count++;
            copy_n=copy_n/10;
        }
        int ans=0;
        while(copy2_n!=0){
            int digit=copy2_n%10;
            ans=ans+pow(digit,count);
            copy2_n=copy2_n/10;
        }
        if(ans==n){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};

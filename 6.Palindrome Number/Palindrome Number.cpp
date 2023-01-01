// Approach 1: converting the number into the string

class Solution {
public:
    bool isPalindrome(int x) {
        string y=to_string(x);
        string cpy=y;
        reverse(y.begin(),y.end());
        if(cpy==y){
            return true;
        }
        else{
            return false;
        }
    }
};

//---------------------------------------------------//
//--------------------------------------------------//

// Approach 2: Not converting the number into the string

class Solution {
public:
    bool isPalindrome(int x) {
        int copy_x=x;
       if(x<0){
           return false;
       }
       else{
           long long int rev=0;
           while(x!=0){
               int digit=x%10;
               if((rev>INT_MAX/10)||(rev<INT_MIN/10)){
                   return false;
               }
               else{
                   rev=rev*10+digit;
               }
               x=x/10;
           }
           if(rev==copy_x){
               return true;
           }
           else{
               return false;
           }
       }
    }
};



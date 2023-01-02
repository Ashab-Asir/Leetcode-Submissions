//Problem link: https://leetcode.com/problems/valid-palindrome/description/

// Approach 1:
class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        //make a string using alphanumeric values
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z')||(s[i]-'0'>=0&&s[i]-'0'<=9)){
             s1+=s[i];
            }
        }
        //Check palindrome or not
        for(int i=0;i<s1.size()/2;i++){
            if(tolower(s1[i])!=tolower(s1[s1.size()-i-1])){
                return false;
            }
        }
        return true;
    }
};

// Approach 2:

class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            while(isalnum(s[i])==false&&i<j){
                i++;
            }
            while(isalnum(s[j])==false&&i<j){
                j--;
            }
            if(toupper(s[i])!=toupper(s[j])){
                return false;
            }
        }
        return true;
    }
};

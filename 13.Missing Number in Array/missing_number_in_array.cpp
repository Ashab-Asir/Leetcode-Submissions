// Problem Link: https://leetcode.com/problems/missing-number/

//Approach :

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>vec;
        for(int i=0;i<=n;i++){
            vec.push_back(i);
        }
        if(vec.size()==n){
            return 0;
        }
        else{
            for(int i=0;i<n;i++){
                if(vec[i]!=nums[i]){
                    return vec[i];
                }
            }
            return vec[n];
        }
    }
};

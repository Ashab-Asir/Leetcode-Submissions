// Problem Link: https://leetcode.com/problems/maximal-score-after-applying-k-operations/description/

//Approach

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {

        long long int sum=0;
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(k--){
            sum=sum+pq.top();
            int x=pq.top();
            pq.pop();
            pq.push(ceil(x/3.0));
        }
        return sum;
    }
};

//Problem Link:https://leetcode.com/problems/maximum-ice-cream-bars/
//Approach
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0,x=costs[0],count=0;
        for(int i=0;i<costs.size();i++){
            if(sum<coins &&x<=coins){
                sum=sum+costs[i];
                count++;
            }
        }
        if(sum<=coins){
            return count;
        }
        else{
            return count-1;
        }
    }
};

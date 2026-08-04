class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int t= sum/2;
        vector<bool> dp(t+1, false);
        dp[0]=true;
        for(int i=0; i<nums.size(); i++){
            for(int j=t; j>=nums[i]; j--){
                dp[j]=dp[j] || dp[j-nums[i]];
            }
        }
        return dp[t];

    }
};

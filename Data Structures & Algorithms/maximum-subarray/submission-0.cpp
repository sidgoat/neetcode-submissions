class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cnt=0;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            cnt=cnt+nums[i];
            if(cnt<0){
                cnt=0;
            }
            if(cnt>ans){
                ans=cnt;
            }
        }
        if(ans==0){
            sort(nums.begin(), nums.end());
            return nums.back();
        }
        else{
        return ans;
        }

    }
};

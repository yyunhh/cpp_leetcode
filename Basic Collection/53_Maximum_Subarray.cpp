class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0;
        int tmp = nums[0];
        
        for(int i=0; i< nums.size(); i++){
            ans += nums[i];
            tmp = max(tmp, ans);
            ans = max(ans, 0);
        }
        
        return tmp;
    }
};
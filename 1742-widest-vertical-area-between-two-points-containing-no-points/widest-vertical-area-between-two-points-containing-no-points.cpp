class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& nums) {
        int ans = 0;

        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {
            ans = max(ans, nums[i][0] - nums[i-1][0]);
        }

        return ans;
    }
};
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1); // Initialize dp array with default length 1
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1); // Update length at i if a longer sequence is found
                }
            }
        }
        
        return *max_element(dp.begin(), dp.end()); // Find the maximum length in the dp array
    }
};

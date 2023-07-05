// Brute Force Approach
// Time complexity -> O(n^2) and Space -> O(n)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j] && i!=j)
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;

    }
};
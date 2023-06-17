class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int sum=0;
        int i=0,j=0;
        int ans=INT_MAX;
        while(i<nums.size())
        {
            sum+=(nums[i]);
            if(sum<target)
            {
                i++;
            }
            else
            {
                while(sum>=target)
                {
                    ans=min(ans,(i-j+1));
                    sum-=nums[j];
                    j++;
                }
                
                i++;
            }
        }
        if(ans==INT_MAX)
            return 0;
        return ans;
    }
};
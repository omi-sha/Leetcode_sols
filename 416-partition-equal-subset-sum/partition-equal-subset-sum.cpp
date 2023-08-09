class Solution {
public:
int subsetSum(vector<int>arr,int sum)
{   
    int n=arr.size();
    int dp[n+1][sum+1];
    for(int i = 0; i < sum+1; i++)
        dp[0][i] = 0;
    for(int i = 0; i < n+1; i++)
        dp[i][0] = 1;

        for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
                
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum%2!=0) return 0;
        else
        {
            return subsetSum(nums,sum/2);
        }
        
    }
};
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int cntp=0,cntn=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            cntn++;
            else if(nums[i]>0){
                cntp++;
            }
        }
        return max(cntp,cntn);
    }
};
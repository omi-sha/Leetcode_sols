class Solution 
{
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> mp;
        int mini = INT_MAX;
        
        for(auto it:nums1) //storing frequency of nums1's element in the hashmap mp
            mp[it]++;
        
        for(auto it:nums2) //searching minimum common element and storing it
        {
            if(mp[it]>0)
            {
                mini = min(mini, it);
            }
        }
        return mini==INT_MAX ? -1 : mini; //if no element is common return -1 else return minimum common element
        
    }
};
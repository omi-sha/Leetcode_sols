class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
    int ans=0;
    unordered_map<int,int> m;
    for(auto e:nums)
        m[e]++;
    for(auto e:m)
    {
        if(e.second==1)
            ans+=e.first;
    }
    return ans;

    }
};
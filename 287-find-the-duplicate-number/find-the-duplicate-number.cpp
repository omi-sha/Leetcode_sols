class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int duplicate=0;
        for(auto it:nums)mp[it]++;
        for(auto i:mp)
        {
            if(i.second>1){
                duplicate= i.first;
                break;
            }
        }
        return duplicate;
    }
};
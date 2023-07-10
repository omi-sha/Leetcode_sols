class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2)
    {
        int ans= 0;
        unordered_map<string, int> mp1;
        unordered_map<string, int> mp2;
        for(int i=0; i<words1.size(); i++)
        {
            mp1[words1[i]]++;
        }
        for(int i=0; i<words2.size(); i++)
        {
            mp2[words2[i]]++;
        }
        for(int j=0; j<words2.size(); j++)
        {
            if(mp1[words2[j]]== 1 && mp2[words2[j]]== 1)
            {
                ans++;
            }
        }
        return ans;
    }
};
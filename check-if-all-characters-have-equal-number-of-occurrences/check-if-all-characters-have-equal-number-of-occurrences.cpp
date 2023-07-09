class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        vector<int>ans;
        for(auto it:s) m[it]++;
        for(auto it:m)
        {
          ans.push_back(it.second);
        }
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]!=ans[i-1])
            {
                return false;
            }
        }
        return true;
    }
};
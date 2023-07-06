class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st(allowed.begin(),allowed.end());
        int flag;
        int count=0;
        for(auto it:words)
        {   flag=0;
            for(auto ch:it)
            {
                if(st.find(ch)==st.end())
                {
                    flag=1;
                    break;
                }
            }
            if(!flag) count++;
        }
        return count;
        
    }
};
class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>m;
        for(auto x:s) m[x]++;
        for(auto y:t) m[y]--;
        int ans=0;
        for(auto a:m) ans+=abs(a.second);
        return ans/2;
    }
};
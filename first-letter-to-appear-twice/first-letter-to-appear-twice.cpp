class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> mp;
        int i;
        for(i=0 ; i<s.length() ; i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]>1)
                return s[i];
        }
        return s[0];
    }
};
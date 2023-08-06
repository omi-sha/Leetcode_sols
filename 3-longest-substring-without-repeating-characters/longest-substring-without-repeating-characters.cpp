class Solution {
public:
       int lengthOfLongestSubstring(string s) {
        int j=0 ,i=0, maxlength=INT_MIN;
        map<char ,int> mp;
    //     for(int i=0 ;i<s.size(); i++){
    //         mp[s[i]]++;
    //         length++;
    //         while(mp[s[i]]>1)
    //         {
    //             mp[s[j++]]--;
    //             length--;
    //         }
    //      maxlength = max(maxlength,length);
    //     }
    //     return maxlength;
    // }
            if(s.empty())
            return 0;
        while(j<s.length())
        {
            mp[s[j]]++;
            if(mp.size()==j-i+1)
            {
            maxlength=max(maxlength,j-i+1);
            j++;
            }
            else if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return maxlength;
    } 
};
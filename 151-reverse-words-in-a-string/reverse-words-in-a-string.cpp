class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int n= s.size();
        int i=0;
        while(i<n)
        {
            string temp="";
            while(s[i]==' '&& i<n)
            {
                i++;
            }
            while(s[i]!=' '&& i<n)
            {
                temp+=s[i];
                i++;
            }
            if(temp.size()>0)
            {
                if(ans.size()==0)
                ans=temp;
                else
                ans=temp+" "+ans;
            }
        }
    return ans;  
    }
};
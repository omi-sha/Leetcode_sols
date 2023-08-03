class Solution {
public:
    int addMinimum(string word) {
        int n=word.length();
        int i=0,count=0;
        while(i<n)
        {
            if(word[i]!='a')count++;
            else i++;
            if(word[i]!='b')count++;
            else i++;
            if(word[i]!='c')count++;
            else i++;
        }
        return count;
    }
};
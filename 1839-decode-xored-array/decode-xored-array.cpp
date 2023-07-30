class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first); // The first element of the original array is 'first'.
        
        for (int i = 0; i < encoded.size(); i++) {
            int decoded = ans.back() ^ encoded[i];
            ans.push_back(decoded);
        }
        
        return ans;
    }
};

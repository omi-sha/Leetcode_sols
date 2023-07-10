class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans;
        for (auto it : nums) mp[it]++;
        for (auto it : mp) {
            if (it.second > 1) {
                ans.push_back(it.first); // push back the duplicate number
            }
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (mp.find(i) == mp.end()) {
                ans.push_back(i); // push back the missing number
                break;
            }
        }
        return ans;
    }
};

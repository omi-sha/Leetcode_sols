class Solution {
public:
    int first(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int res = -1; // Initialize with a value indicating not found
        
        while (l <= h) {
            int mid = l + (h - l) / 2;
            
            if (target == nums[mid]) {
                res = mid;
                h = mid - 1;
            } else if (target < nums[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        return res;
    }
    
    int last(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int res = -1; // Initialize with a value indicating not found
        
        while (l <= h) {
            int mid = l + (h - l) / 2;
            
            if (target == nums[mid]) {
                res = mid;
                l = mid + 1;
            } else if (target < nums[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        return res;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        int a = first(nums, target);
        int b = last(nums, target);
        
        ans.push_back(a);
        ans.push_back(b);
        
        return ans;
    }
};

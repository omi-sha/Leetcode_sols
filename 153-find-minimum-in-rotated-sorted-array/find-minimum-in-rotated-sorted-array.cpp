class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        int end = n - 1;

        while (start <= end) {
            if (nums[start] <= nums[end]) {
                return nums[start];
            }
            
            int mid = start + (end - start) / 2;
            int next = (mid + 1) % n;
            
    if (nums[mid] <= nums[next] && nums[mid] <= nums[(mid - 1 + n) % n]) {
                return nums[mid];
            }
            
            if (nums[mid] >= nums[start]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};

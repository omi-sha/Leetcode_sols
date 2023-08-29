class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arr[n + m];
        int i = 0, j = 0, index = 0;
        
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                arr[index++] = nums1[i++];
            } else {
                arr[index++] = nums2[j++];
            }
        }
        
        while (i < m) {
            arr[index++] = nums1[i++];
        }
        
        while (j < n) {
            arr[index++] = nums2[j++];
        }
        
        // Copy back the merged elements to nums1
        for (int k = 0; k < m + n; k++) {
            nums1[k] = arr[k];
        }
    }
};

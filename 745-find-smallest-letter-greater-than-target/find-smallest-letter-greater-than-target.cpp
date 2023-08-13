class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int h = letters.size() - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (letters[mid] <= target) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }

        // If l is out of bounds, the next greatest element wraps around to the beginning
        if (l == letters.size()) {
            return letters[0];
        }

        return letters[l];
    }
};

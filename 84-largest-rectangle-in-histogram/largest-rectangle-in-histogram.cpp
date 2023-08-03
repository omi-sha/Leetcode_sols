class Solution {
public:
    vector<int> NSL(vector<int>& heights) {
        vector<int> left;
        stack<pair<int, int>> s;
        for (int i = 0; i < heights.size(); i++) {
            while (!s.empty() && s.top().first >= heights[i]) {
                s.pop();
            }
            if (s.empty()) {
                left.push_back(-1);
            } else {
                left.push_back(s.top().second);
            }
            s.push(make_pair(heights[i], i));
        }
        return left;
    }

    vector<int> NSR(vector<int>& heights) {
        vector<int> right;
        stack<pair<int, int>> s;
        for (int i = heights.size() - 1; i >= 0; i--) {
            while (!s.empty() && s.top().first >= heights[i]) {
                s.pop();
            }
            if (s.empty()) {
                right.push_back(heights.size());
            } else {
                right.push_back(s.top().second);
            }
            s.push(make_pair(heights[i], i));
        }
        reverse(right.begin(), right.end());
        return right;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> width, left, right;
        left = NSL(heights);
        right = NSR(heights);
        int maxArea = 0;

        for (int i = 0; i < heights.size(); i++) {
            width.push_back(right[i] - left[i] - 1);
        }

        for (int i = 0; i < heights.size(); i++) {
            int area = heights[i] * width[i];
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};
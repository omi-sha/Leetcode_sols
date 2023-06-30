class Solution {
public:
    vector<int>previous(vector<int>&heights)
    {
        vector<int>ans;
        stack<int>st;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            int ele=(st.empty())?-1:st.top();
            ans.push_back(ele);
            st.push(i);
        }
        return ans;
    }
        vector<int>next(vector<int>&heights)
    {
        vector<int>ans;
        stack<int>st;
        int n=heights.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            int ele=(st.empty())?n:st.top();
            ans.push_back(ele);
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int largestRectangleArea(vector<int>& heights){
              int res=0;
              int n=heights.size();
              vector<int>ps=previous(heights);
              vector<int>ns=next(heights);
              for(int i=0;i<n;i++)
              {
                  int curr=(ns[i]-ps[i]-1)*heights[i];
                  res=max(res,curr);
              }
              return res;
    }
};
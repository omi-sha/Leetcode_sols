class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> nextGreaterEle;

        int n = nums2.size();
        nextGreaterEle.insert({nums2[n-1],-1});
        st.push(-1);

        for(int i=n-1; i>=0; i--){
            if(nums2[i] > st.top()){
                //If number > stack top, keep popping until greater number found or empty stack
                while(!st.empty() && nums2[i] > st.top()){
                    st.pop();
                }
                
                //If stack empty, push -1.
                if(st.empty()) st.push(-1);
                //Insert Element with stack top
                nextGreaterEle.insert({nums2[i],st.top()});
            }

            //If number is smaller, Stack top is its next greater element 
            else nextGreaterEle.insert({nums2[i],st.top()});

            st.push(nums2[i]);
        }

        //Check for the common elements and find its next greater element
        vector<int> ans;
        for(auto n: nums1){
            ans.push_back(nextGreaterEle[n]);
        }

        return ans;
    }
};
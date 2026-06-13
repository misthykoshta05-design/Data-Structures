class Solution {
    private:
    vector<int>prevSmaller(vector<int>& heights){
        int n=heights.size();
        stack<int>s;
        vector<int>prev(n);
        for(int i=0;i<n;i++){
            int curr=heights[i];
            while(!s.empty() && heights[s.top()]>=curr){
                s.pop();
            }
            prev[i]=s.empty()?-1:s.top();
            s.push(i);
        }
        return prev;
    }
    vector<int>nextSmaller(vector<int>&heights){
        int n=heights.size();
        stack<int>s;
        vector<int>next(n);
        for(int i=n-1;i>=0;i--){
            int curr=heights[i];
            while(!s.empty() && heights[s.top()]>=curr){
                s.pop();
            }
            next[i]=s.empty()? n:s.top();
            s.push(i);
        }
        return next;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>prev=prevSmaller(heights);
        vector<int>next=nextSmaller(heights);
        int maxArea=0;
        for(int i=0;i<n;i++){
            int width=next[i]-prev[i]-1;
            int area=heights[i]*width;
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};

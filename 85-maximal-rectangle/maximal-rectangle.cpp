class Solution {
public:
      int area(vector<int>& heights) {
        stack<int> st;
        int maxArea=0;
        int n=heights.size();
        int nse;
        int pse;
        int ele;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                ele=st.top();
                st.pop();
                nse=i;
                pse=st.empty()?-1:st.top();
                maxArea=max(maxArea, heights[ele]*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            nse=n;
            ele=st.top();
            st.pop();
            pse=st.empty()?-1:st.top();
            maxArea=max(maxArea, heights[ele]*(nse-pse-1));
        }
        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> v(cols,0);
       
        int mx=0;

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols;j++ ){
                 if(matrix[i][j] == '1') v[j]++;
                 if(matrix[i][j] == '0') v[j] = 0; 
               
            }
            int helper= area(v);
            mx= max(mx,helper);
        }
        return mx;
        
    }
};
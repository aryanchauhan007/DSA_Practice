class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       map<int, int>mpp;
       stack<int>stk ;

       for(int i =nums2.size()-1; i>=0; i--){
        
        while(stk.size()>0 && stk.top()<=nums2[i]){
            stk.pop();
        }
        if(stk.size()==0){
            mpp[nums2[i]]=-1;
         }
        else {
            mpp[nums2[i]]=stk.top();
        } 
            stk.push(nums2[i]);
       }
       vector<int>ans;
       for(int i=0 ; i<nums1.size();i++){
        if(mpp.find(nums1[i])!=mpp.end()){
            ans.push_back(mpp[nums1[i]]);
        }
        else ans.push_back(-1);
       } 
       return ans;
    }           
       
};
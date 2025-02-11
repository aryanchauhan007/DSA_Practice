class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int pre_sum=0, cnt=0;
        for(int i=0 ; i<nums.size(); i++){
            pre_sum+=nums[i];
            int remove= pre_sum - k;
            cnt +=mpp[remove];
            mpp[pre_sum] +=1; 
        }

        return cnt;
    }
};
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, r=0, max_len=0, zeroes=0;
        for(r =0 ; r<nums.size(); r++){
            if(nums[r]==0){
                zeroes++;
            }
            while(zeroes>k){
                if(nums[l]==0){
                    zeroes--;
                }
                l++;
            }
            max_len=max(max_len,r-l+1);

        }
        return max_len;
        
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0) return 0;
        unordered_map<char,int> hash;
        int l=0, r=0, max_len=0;
     
        while(r<n){
            if(hash.find(s[r])!=hash.end()){
                if(hash[s[r]]>=l){
                    l= hash[s[r]]+1;
                }
            }
            int len= r-l+1;
            max_len= max(len,max_len);
            hash[s[r]]=r;
            r++;
            
        }
        return max_len;
        
    }
};
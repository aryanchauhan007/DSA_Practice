class Solution {
public:
    int numberOfSubstrings(string s) {
       
        int count=0,a=-1,b=-1,c=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') a=i;
            else if(s[i]=='b') b=i;
            else c=i;

            if(a!=-1&&b!=-1&&c!=-1){
                count+=min(min(a,b),c)+1;
            }
        }
        return count;
    }
};
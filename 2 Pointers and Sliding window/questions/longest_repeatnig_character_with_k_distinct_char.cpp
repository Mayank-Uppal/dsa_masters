class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0,l=0,maxlen=0,count=0,maxf=0;
        vector<int> res(26,0);

        while(r<s.length()){
            res[s[r]-'A']++;
            maxf=max(maxf,res[s[r]-'A']);

            if( (r-l+1) - maxf > k ){
                res[s[l]-'A']--;
                maxf=0;
                for(int i=0;i<res.size();i++)maxf=max(maxf,res[i]);
                l++;
            } 
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
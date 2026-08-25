class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // coee
        int l=0,r=0,maxlen=-1;
        unordered_map<char,int> pq;
        
        while(r<s.length()){
            pq[s[r]]++;
            if(pq.size() > k){
                pq[s[l]]--;
                if(pq[s[l]]==0)pq.erase(s[l]);
                l++;
            }
            if(pq.size()==k)maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
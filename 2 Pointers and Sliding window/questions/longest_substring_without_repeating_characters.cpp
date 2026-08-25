

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> pq;
        int l=0;

        int maxlen=0;

        for(int i=0;i<s.length();i++){
            if(pq.find(s[i])!=pq.end() && pq[s[i]] >= l){
                l=pq[s[i]]+1;
            }
            pq[s[i]]=i;
            maxlen=max(maxlen,i-l+1);
        }
        return maxlen;
    }
};
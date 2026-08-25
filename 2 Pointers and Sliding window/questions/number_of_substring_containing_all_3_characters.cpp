class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0,count=0;
        unordered_map<char,int> pq;

        while(r<s.length()){
            pq[s[r]]++;
            while(pq.size()==3){
                count+=s.length()-r;
                pq[s[l]]--;
                if(pq[s[l]]==0)pq.erase(s[l]);
                l++;
            }
            r++;
        }
        return count;
    }
};
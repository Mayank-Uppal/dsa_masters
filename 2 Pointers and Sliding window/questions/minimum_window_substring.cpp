class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> pq;
        for(auto i:t)pq[i]++;

        int l=0;int r=0;int minlen=INT_MAX;
        int count=0;
        int sidx=-1;

        while(r<s.length()){
            if(pq[s[r]] > 0)count++;
            pq[s[r]]--;

            while(count==t.length()){

                if(r-l+1 < minlen){
                    minlen=r-l+1;
                    sidx=l;
                }
                pq[s[l]]++;
                if(pq[s[l]] > 0)count--;
                l++;
            }
            r++;
        }

        if(sidx==-1 && minlen>=INT_MAX)return "";
        return s.substr(sidx,minlen);
    }
};
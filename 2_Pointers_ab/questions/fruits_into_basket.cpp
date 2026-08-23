class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,maxlen=0;
        unordered_map<int,int> pq;

        while(r<fruits.size()){
            pq[fruits[r]]++;
            if(pq.size()>2){
                pq[fruits[l]]--;
                if(pq[fruits[l]] == 0){
                    pq.erase(fruits[l]);
                }
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
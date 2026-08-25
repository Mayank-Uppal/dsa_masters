class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int tsum=0;
        int maxsum=0;
        int l=0;
        int r=cardPoints.size()-1;

        while(l<k){
            tsum+=cardPoints[l++];
        }

        l=l-1;
        maxsum=max(maxsum,tsum);

        while(l>=0){
            tsum=tsum-cardPoints[l--];
            tsum=tsum + cardPoints[r--];
            maxsum=max(maxsum,tsum);
        }
        return maxsum;
    }
};
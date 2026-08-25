class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> pq;
        int currsum=0;
        int count=0;
        pq[currsum]++;

        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            int find=currsum-k;
            if(pq.find(find)!=pq.end()){
                count+=pq[find];
            }
            pq[currsum]++;
        }
        return count;
    }
};
class Solution {
public:

    int solve(vector<int>& nums,int k){
        if(k<0)return 0;
        int r=0,l=0,count=0;
        unordered_map<int,int> pq;

        while(r<nums.size()){
            pq[nums[r]]++;
            while(pq.size() > k){
                pq[nums[l]]--;
                if(pq[nums[l]] == 0)pq.erase(nums[l]);
                l++;
            }
            count+=r-l+1;
            r++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k) - solve(nums,k-1);
    }
};
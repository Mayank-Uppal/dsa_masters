class Solution {
public:
    int solve(vector<int>& nums,int k){
        if(k<0)return 0;

        int r=0,l=0,count=0,sum=0;

        while(r<nums.size()){
            if(nums[r]%2!=0)count++;
            while(count > k){
                if(nums[l]%2!=0)count--;
                l++;
            }
            sum+=r-l+1;
            r++;
        }
        return sum;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};
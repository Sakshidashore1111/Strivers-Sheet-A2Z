class Solution {
public:
    
        int atmost(const vector<int>&nums, int goal)
        {
        int count=0,sum=0,left=0,right;
        int n=nums.size();

        for(right=0;right<n;right++)
        {
             sum+=nums[right];
             if(goal<0)
             return 0;

             while(sum>goal)
             {
                sum-=nums[left];
                left++;
             }

             count+=right-left+1;
        }
        return count;
    }


        int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal)-atmost(nums,goal-1);
    }
};
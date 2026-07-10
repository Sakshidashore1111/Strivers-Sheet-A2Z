class Solution {
public:
     
     int atmost(const vector<int>&nums, int k)
     {
        int left=0,sum=0,count=0;
        int n=nums.size();
         if(k<0)
            return 0;
        for(int right=0;right<n;right++)
        {
            sum+=(nums[right]%2); 
           
            while(sum>k)
            {
                sum-=(nums[left]%2);
                left++;
            }
            count=count+ (right-left+1);
        }
        return count;
     }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);

    }
};
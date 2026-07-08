class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int left=0,right=0, maxlen=0,zeroes=0;
        int n=nums.size();

        while(right<n)
        {
           if(nums[right]==1)
           {
            int currlen = right-left+1;
            maxlen=max(maxlen,currlen);
            right++;
           }

           else if(nums[right]==0)
           {   
            zeroes++;
        
               if(zeroes<=k)
               {
                
                int currlen=right-left+1;
                maxlen=max(maxlen,currlen);
                right++;
               }

               else
               {
                  while(zeroes>k)
                  {
                    if(nums[left]==0)
                    {
                        zeroes--;
                        left++;
                    }
                    else
                    left++;
                  }
                  int currlen = right - left + 1;
                    maxlen = max(maxlen, currlen);
                    right++;
               }
           }
        }
        return maxlen;
    }
};
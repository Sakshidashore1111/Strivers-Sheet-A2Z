class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left = 0, right = 0;
        int maxlen = 0, zeroes = 0;
        int n = nums.size();

        while(right < n)
        {
            if(nums[right] == 0)
                zeroes++;

            while(zeroes > k)
            {
                if(nums[left] == 0)
                    zeroes--;
                left++;
            }

            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
};
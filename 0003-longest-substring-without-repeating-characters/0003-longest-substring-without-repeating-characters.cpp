class Solution{
    public:
    int lengthOfLongestSubstring(string s)
    {
        int left=0, right=0,ans=0;
        int n=s.size();
        unordered_map<char,int>sakshi;
        while(right<n)
        {
           if(sakshi.find(s[right])!=sakshi.end() && sakshi[s[right]]>=left)
               {
                left=sakshi[s[right]]+1;
               }

               sakshi[s[right]] = right;
               ans=max(ans,right-left+1);
               right++;
        }
        return ans;
    }
};
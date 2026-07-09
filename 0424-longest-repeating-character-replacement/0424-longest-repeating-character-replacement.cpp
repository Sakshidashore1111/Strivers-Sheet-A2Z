class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n=s.size();
        int left=0,maxfreq=0, ans=0;
        vector<int>freq(26,0);
        for(int right=0;right<n;right++)
        {
            maxfreq=max(maxfreq,++freq[s[right]-'A']);
            while((right-left+1)-maxfreq > k )
            {
               
                freq[s[left]-'A']--;
                left++;
            }
            
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
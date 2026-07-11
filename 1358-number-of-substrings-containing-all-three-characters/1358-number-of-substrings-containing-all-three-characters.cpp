class Solution {
public:
    int numberOfSubstrings(string s) {
        
       int left=0,count=0; 
       vector<int>freq(3,0);
       int n=s.size();

       for(int right=0;right<n;right++)
       {
           ++freq[s[right]-'a'];
           while(freq[0]>=1 && freq[1]>=1 && freq[2]>=1)
           {
                count+=n-right;
                --freq[s[left]-'a'];
                left++;
           }
       }
       return count;

    }
};
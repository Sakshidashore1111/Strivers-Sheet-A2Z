class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int Tsum=0,minsum=0;
        int n=cardPoints.size();
        for(int i=0;i<n;i++)
        {
            Tsum+=cardPoints[i];
        }
        int t=n-k;
        //hume iss windowsize ka minimum find karna hai
        int left=0,Wsum=0;
        for(int right=0;right<t;right++)
        {
                Wsum+=cardPoints[right];  //first window sum
                minsum=Wsum;
        }
        for(int j=t;j<n;j++)
        {
            Wsum-=cardPoints[left];
            left++;
            Wsum+=cardPoints[j];
        
       minsum=min(minsum,Wsum);
        }
        
      int maxsum=Tsum-minsum;
     return maxsum;
    }
};
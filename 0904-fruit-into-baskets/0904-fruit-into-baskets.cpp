class Solution {
public:
    int totalFruit(vector<int>& fruits) {
     
     unordered_map<int,int>sakshi;
     int left=0,maxlen=0,right=0;
     int n=fruits.size();
for(int right=0;right<n;right++)
{
    sakshi[fruits[right]]++;
     while(sakshi.size()>2)
        {
            sakshi[fruits[left]]--;

            if(sakshi[fruits[left]]==0)
            sakshi.erase(fruits[left]);
            left++;
           
        }
        maxlen=max(maxlen,right-left+1);
}
     return maxlen;
     }
};
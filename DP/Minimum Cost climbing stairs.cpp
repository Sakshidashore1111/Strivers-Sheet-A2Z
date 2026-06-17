//by MEMOIZATION


#include<iostream>
#include<vector>
using namespace std;

int solve(int cost[],int n,vector<int>& dp)
{
    if(n==0)
    return cost[0];
    
    if(n==1)
    return cost[1];
    
    if(dp[n]!=-1)
    return dp[n];
    
    dp[n] = cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    return dp[n];
}


int minCost(int cost[], int n)
{
    vector<int>dp(n,-1);
    int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    return ans;
}


int main()
{
    int cost[4]={10,15,20,3};
    
    int n=sizeof(cost)/sizeof(cost[0]);
    cout<<"minimum cost "<<minCost(cost,n);
    return 0;
}
  

//By TABULATION

#include<iostream>
#include<vector>
using namespace std;

int solve(int cost[],int n)
{
    vector<int>dp(n);
    dp[0]=cost[0];
    dp[1]=cost[1];
    
    for(int i=2;i<n;i++)
    {
        dp[i]=cost[i]+min(dp[i-1],dp[i-2]);   //I am storing it
    }
    return min(dp[n-1],dp[n-2]);
}


int minCost(int cost[], int n)
{
    
    return solve(cost,n);
}


int main()
{
  int cost[4]={10,15,20,25};
    
    cout<<"Minimum cost "<<minCost(cost,4);
    return 0;
}


//BY SPACE COMPLEXITY


#include<iostream>
#include<vector>
using namespace std;


int solve(int cost[], int n)
{
     int prev2 = cost[0];
    int prev1 = cost[1];

    
    for(int i=2;i<n;i++)
    {
        int curr;
        
        curr = cost[i]+min(prev1,prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    
    return min(prev1,prev2);
}



int minCost(int cost[], int n)
{
  
 return solve(cost,n);
}

int main()
{
    int cost[4] = {10,15,20,25};
    cout<<"Minimum cost "<<minCost(cost,4);
    return 0;
}





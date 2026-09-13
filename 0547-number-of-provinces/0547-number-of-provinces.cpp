class Solution {
public:

void DFS(unordered_map<int,vector<int>>&adj,int node,vector<bool>&visited,int &count)
{ 
     visited[node]=true;

for(auto neighbour:adj[node])
        {     
           if(!visited[neighbour])
            {
              
                DFS(adj,neighbour,visited,count);
            }
          
        }
     
        
}

    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int count=0;
        unordered_map<int,vector<int>>adj;
        int n=isConnected.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {

               adj[i].push_back(j);
            
                }
            }
        }

      vector<bool>visited(isConnected.size(),false);

        for(int i=0;i<n;i++)
        {
             
             if(!visited[i])
           { DFS(adj,i,visited,count);
                count++;
           }
        }
        return count;
    }
};
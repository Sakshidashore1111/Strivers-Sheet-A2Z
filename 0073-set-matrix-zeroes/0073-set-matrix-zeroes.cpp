class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m=matrix.size();       //number of rows
        int n=matrix[0].size();    //number of columns
        vector<int>rows(m,0);     //took one vector called row of size m and initialised it with 0
        vector<int>cols(n,0);     //took another vector called column of size n and initialised with 0

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    rows[i]=1;
                    cols[j]=1;
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(rows[i]==1 || cols[j]==1)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
    
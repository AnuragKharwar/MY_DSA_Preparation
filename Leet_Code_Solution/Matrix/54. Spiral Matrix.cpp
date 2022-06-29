class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int row_start=0;
        int col_start=0;
        int row_end=mat.size()-1;
        int col_end=mat[0].size()-1;
        int c=0;
        vector<int> ans;
        
        
        int m=row_end+1;
        int n=col_end+1;
        while(c<m*n)
       
        {
//               printing 1st row from start
            for(int i=col_start;i<=col_end;i++)
            {
                ans.push_back(mat[row_start][i]);
                  c++;
                  if(c==m*n)
                  return ans;
            }
            row_start++;
//             printing last col from end
            for(int i=row_start;i<=row_end;i++)
            {
                ans.push_back(mat[i][col_end]);
                c++;
                if(c==m*n)
                        return ans;
            }
            col_end--;
//             printing last row from end
            for(int i=col_end;i>=col_start;i--)
            {
                ans.push_back(mat[row_end][i]);
                c++;
                  if(c==m*n)
                        return ans;
            }
            row_end--;
//             printing 1st col from start
        
                for(int i=row_end;i>=row_start;i--)
                {
                    ans.push_back(mat[i][col_start]);
                    c++;
                    if(c==m*n)
                        return ans;
                }
            col_start++;
                

        }
    return ans; 
    }
};
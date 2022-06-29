class Solution {
public:
   
    void rotatetarget(vector<vector<int>> &target){
        int r=target.size();
        for(int i=0;i<r;i++)
        {
            for(int j=i;j<r;j++)
              swap(target[j][i],target[i][j]);        
        }
        for(int k=0;k<r;k++)
             reverse(target[k].begin(),target[k].end());
    }    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int r=mat.size();
        int col=mat[0].size();
        if(target==mat) return true;
//         rotation 0;
        else
        {
        int count=3;
        while(count--)
             {
           rotatetarget(target); 
           if(target==mat)
                return true;
            }  
        }
        
      return false;  
    }
};

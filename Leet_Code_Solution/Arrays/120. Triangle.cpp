public:
int minimumTotal(vector<vector<int>> &triangle)
{
  int minsum = 0;
  // minsum=triangle[0][0];
  // if(triangle.size()==1) return minsum;
  //         bottom up approach
  for (int i = triangle.size() - 2; i >= 0; i--)
  {
    for (int j = 0; j < triangle[i].size(); j++)
    {
      triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
    }
  }
  return triangle[0][0];
}
}
;
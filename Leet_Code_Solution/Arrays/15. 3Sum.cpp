class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    for (int i = 0; i < nums.size() - 1; i++)
    {
      for (int j = i + 1; j < nums.size() - 1; j++)
      {
        for (int k = j + 1; k < nums.size() - 1; k++)
        {
          if (nums[i] + nums[j] + nums[k] == 0)
          {
          }
        }
      }
    }
  }
};
class Solution
{
public:
  int pivotIndex(vector<int> &nums)
  {
    int totalsum = accumulate(nums.begin(), nums.end(), 0);
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      sum += nums[i];
      if (sum * 2 == totalsum + nums[i])
      {
        return i;
      }
    }

    return -1;
  }
};
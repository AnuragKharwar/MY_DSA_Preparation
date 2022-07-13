class Solution
{
public:
  vector<int> maxScoreIndices(vector<int> &nums)
  {
    int ones = 0, zeros = 0;
    for (auto num : nums)
      if (num == 1)
        ones++;
    int prevOnes = ones;
    int maxScore = 0, currScore = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      currScore = ones + zeros;
      if (nums[i] == 0)
        zeros++;
      else
        ones--;
      maxScore = max(currScore, maxScore);
    }
    maxScore = max(maxScore, zeros);
    zeros = 0, ones = prevOnes;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
      currScore = ones + zeros;
      if (nums[i] == 0)
        zeros++;
      else
        ones--;
      if (currScore == maxScore)
        ans.push_back(i);
    }
    if (maxScore == zeros)
    {
      ans.push_back(nums.size());
    }

    return ans;
  }
};
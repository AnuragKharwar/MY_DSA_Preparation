class Solution
{
public:
  vector<vector<int>> subsetsWithDup(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> res;
    helper(nums, res, ans, 0);
    return ans;
  }

  void helper(vector<int> &nums, vector<int> &res, vector<vector<int>> &ans, int idx)
  {
    ans.push_back(res);                     // each time ans get added to final ans;
    for (int i = idx; i < nums.size(); i++) // also work as base case
    {
      if (i > idx && nums[i] == nums[i - 1])
        continue;
      res.push_back(nums[i]);
      helper(nums, res, ans, i + 1);
      res.pop_back();
    }
  }
};
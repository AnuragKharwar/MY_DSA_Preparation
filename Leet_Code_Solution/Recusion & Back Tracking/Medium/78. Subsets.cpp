// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
class Solution
{
public:
  //     pick and not pick method
  vector<vector<int>> ans;
  void helper(vector<int> &nums, vector<int> res, int idx)
  {
    //         base case
    if (idx >= nums.size())
    {
      ans.push_back(res);
      return;
    }
    //         pick
    res.push_back(nums[idx]);
    helper(nums, res, idx + 1);
    //         not pick
    res.pop_back();
    helper(nums, res, idx + 1);
  }
  vector<vector<int>> subsets(vector<int> &nums)
  {
    vector<int> res;
    helper(nums, res, 0);
    return ans;
  }
};
public:
vector<vector<int>> subsets(vector<int> &nums, int idx)
{
  vector<vector<int>> ans;
  {
    if (idx >= nums.size())
      return {{}};
  }
  subsets(nums, idx + 1);
  vector<vector<int>> helper = subsets(nums, idx + 1);
  vector<vector<int>> curAns = {};
  for (auto smallans : helper)
  {
    curAns.push_back(smallans);
    smallans.push_back(nums[idx]);
    curAns.push_back(smallans);
  }
  return curAns;
}
}
;
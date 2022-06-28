public:
void subsetunique(int idx, vector<int> nums, vector<int> &ds, vector<vector<int>> &ans)
{
  ans.push_back(ds);
  for (int i = idx; i < nums.size(); i++)
  {
    if (i != idx && nums[i] == nums[i - 1])
      continue;
    ds.push_back(nums[i]);
    subsetunique(i + 1, nums, ds, ans);
    ds.pop_back();
  }
}

public:
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  vector<vector<int>> ans;
  vector<int> ds;
  subsetunique(0, nums, ds, ans);
  return ans;
}
}
;
public:
int findDuplicate(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  int i = nums.size() - 1;
  while (i > 0)
  {
    if (nums[i] == nums[i - 1])
      return nums[i];
    i--;
  }
  return -1;
}
}
;
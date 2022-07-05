class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    //         two pointer ka question hai aisa lgg rha hai so try it out
    vector<int> ans;
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j)
    {
      if (nums[i] + nums[j] == target)
      {
        ans = {i + 1, j + 1};
        break;
      }
      else if (nums[i] + nums[j] > target)
        j--;
      else if (nums[i] + nums[j] < target)
        i++;
    }
    return ans;
  }
};
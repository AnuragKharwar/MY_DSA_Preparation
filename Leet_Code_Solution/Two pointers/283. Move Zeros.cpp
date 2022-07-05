class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {

    int size = nums.size();
    if (size == 0)
      return;

    int j = 0, l = 0;
    for (int i = 0; i < size; i++)
    {
      if (nums[l] != 0 && l < size - 1)
        l++;
      if (nums[l] == 0)
      {
        for (j = l; j < size - 1; j++)
          nums[j] = nums[j + 1];
        nums[size - 1] = 0;
      }
    }
  }
};
public:
int searchInsert(vector<int> &nums, int target)
{
  int b = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] >= target)
    {
      b = i;
      break;
    }
    else
    {
      b = i + 1;
    }
  }
  return b;
}
}
;

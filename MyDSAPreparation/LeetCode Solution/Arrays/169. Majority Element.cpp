public:
int majorityElement(vector<int> &nums)
{
  int count = 0;
  int el = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (count == 0)
    {
      el = nums[i];
    }
    if (nums[i] == el)
    {
      count += 1;
    }
    else
    {
      count -= 1;
    }
  }
  return el;
}
}
;
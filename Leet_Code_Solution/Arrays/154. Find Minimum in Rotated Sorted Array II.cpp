public:
int findMin(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  // if(nums.size()==1)
  // {
  //     return nums[0];
  // }
  //         corner case when only one element is present in the array.
  if (nums[0] <= nums[nums.size() - 1])
  {
    return nums[0];
  }
  int low = 0;
  int high = nums.size() - 1;
  int mid = 0;
  while (low <= high)
  {
    mid = low + (high - low) / 2;
    if (nums[low] < nums[mid])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return nums[mid + 1];
}
}
;
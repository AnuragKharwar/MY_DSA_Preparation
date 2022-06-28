class Solution
{
public:
  vector<int> searchRange(vector<int> &nums, int target)
  {
    vector<int> ans;
    int low = 0;

    int high = nums.size() - 1;
    int mid = 0;
    int fi = -1;
    int li = -1;
    while (low <= high)
    {
      mid = (low + high) / 2;
      if (target > nums[mid])
      {
        low = mid + 1;
      }

      else if (target < nums[mid])
      {
        high = mid - 1;
      }
      else
      {
        fi = mid; // potentially making it as possible first index accurance value
        high = mid - 1;
      }
    }
    low = 0;
    high = nums.size() - 1;
    mid = 0;

    while (low <= high)
    {
      mid = (low + high) / 2;
      if (target > nums[mid])
      {
        low = mid + 1;
      }

      else if (target < nums[mid])
      {
        high = mid - 1;
      }
      else
      {
        li = mid; // potentialy making it as last accuurance still tying to find out more possibilites
        low = mid + 1;
      }
    }

    ans.push_back(fi);
    ans.push_back(li);
    return ans;
  }
};
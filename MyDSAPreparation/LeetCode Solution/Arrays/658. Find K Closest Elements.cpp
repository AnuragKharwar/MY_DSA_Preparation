public:
int lowerbound(vector<int> &arr, int x)
{
  int low = 0;
  int high = arr.size() - 1;
  int mid = 0;
  while (low <= high)
  {
    mid = low + (high - low) / 2;
    if (arr[mid] <= x)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return high; // it gives floor index
}

public:
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
  vector<int> ans;
  int first = lowerbound(arr, x);
  // cout<<first;
  int second = first + 1;
  // cout<<second;
  while (first >= 0 && second < arr.size() && k > 0)
  {
    if (abs(arr[first] - x) < abs(arr[second] - x))
    {
      // cout<<arr[first]<<arr[second]<<"lline1";
      ans.push_back(arr[first]);
      first--;
    }
    else if (abs(arr[first] - x) > abs(arr[second] - x))
    {
      cout << arr[first] << arr[second] << "lline2";
      ans.push_back(arr[second]);
      second++;
    }
    else if (abs(arr[first] - x) == abs(arr[second] - x))
    {
      if (arr[first] < arr[second])
      {
        ans.push_back(arr[first]);
        // cout<<arr[first]<<arr[second]<<"lline3";
        first--;
      }

      else
      {
        ans.push_back(arr[second]);
        // cout<<arr[first]<<arr[second]<<"lline4";
        second++;
      }
    }
    k--;
  }
  while (first >= 0 && k > 0)
  {

    ans.push_back(arr[first]);
    first--;
    k--;
  }
  while (second < arr.size() && k > 0)
  {

    ans.push_back(arr[second]);
    second++;
    k--;
  }

  sort(ans.begin(), ans.end());
  return ans;
}
}
;
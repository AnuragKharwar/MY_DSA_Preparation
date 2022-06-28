int lowerindex(vector<int> &houses, vevtor<int> &heaters)
{
  int low = 0;
  int mid;
  int high;
  for (auto h : houses)
  {
    high = heaters.size() - 1;
    mid = low + (high - low) / 2;
    if (heaters[mid] > h)
    {
      high = mid;
    }
    else
      low = mid;
  }
}

public:
int findRadius(vector<int> &houses, vector<int> &heaters)
{
}
}
;
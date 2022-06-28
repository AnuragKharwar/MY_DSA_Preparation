public:
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
  //         ye problem kiya hua hai /stack and has map se hoga
  vector<int> ans;
  stack<int> stack;
  unordered_map<int, int> map;
  int n = nums2.size();
  for (auto n : nums2)
  {
    while (!stack.empty() && n > stack.top())
    {
      map[stack.top()] = n;
      stack.pop();
    }
    stack.push(n);
  }
  while (!stack.empty())
  {
    map[stack.top()] = -1;
    stack.pop();
  }
  for (auto val : nums1)
  {
    ans.push_back(map[val]);
  }
  return ans;
}
}
;
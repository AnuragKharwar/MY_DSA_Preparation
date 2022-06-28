public:
//      note always paramter by refrerence if value is getting upated in process. not static
void FindCombination(int idx, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &ds)
{
  if (idx == candidates.size())
  {
    if (target == 0)
    {
      ans.push_back(ds);
    }
    return;
  }
  //             pick up the element
  if (candidates[idx] <= target)
  {
    ds.push_back(candidates[idx]);
    FindCombination(idx, candidates, target - candidates[idx], ans, ds);
    ds.pop_back(); // popping the element from back in returning
  }
  FindCombination(idx + 1, candidates, target, ans, ds);
}

public:
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
  vector<vector<int>> ans;
  vector<int> ds;
  FindCombination(0, candidates, target, ans, ds); // fucntion calling
  return ans;
}
}
;
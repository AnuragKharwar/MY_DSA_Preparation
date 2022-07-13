class Solution
{
  void post(Node *root, vector<int> &ans) // ans is pass by reference
  {
    if (!root)
      return;
    else
      for (auto a : root->children)
        post(a, ans);
    ans.push_back(root->val);
  }

public:
  vector<int> postorder(Node *root)
  {
    vector<int> ans;
    post(root, ans);
    return ans;
  }
};
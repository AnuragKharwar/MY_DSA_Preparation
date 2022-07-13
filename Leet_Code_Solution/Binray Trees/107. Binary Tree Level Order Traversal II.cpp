class Solution
{
public:
  vector<vector<int>> levelOrderBottom(TreeNode *root)
  {
    queue<TreeNode *> q;
    q.push(root);
    vector<int> res;
    vector<vector<int>> ans;
    if (root == NULL)
      return ans;

    while (!q.empty())
    {
      int count = q.size();

      while (count--)
      {
        TreeNode *curr = q.front();
        q.pop();
        res.push_back(curr->val);
        if (curr->left != NULL)
          q.push(curr->left);
        if (curr->right != NULL)
          q.push(curr->right);
      }
      ans.push_back(res);
      res = {};
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
class Solution
{
public:
  vector<vector<int>> zigzagLevelOrder(TreeNode *root)
  {
    vector<vector<int>> ans;

    if (root == NULL)
      return ans;
    stack<TreeNode *> odd;
    stack<TreeNode *> even;
    odd.push(root);
    int level = 1;

    while (odd.size() > 0 || even.size() > 0)
    {
      vector<int> res;

      if (level % 2 == 1)
      {
        while (odd.size() > 0)
        {
          TreeNode *curr = odd.top();
          odd.pop();
          res.push_back(curr->val);

          if (curr->left != NULL)
            even.push(curr->left);
          if (curr->right != NULL)
            even.push(curr->right);
        }
      }
      else
      {
        while (even.size() > 0)
        {
          TreeNode *curr = even.top();
          even.pop();
          res.push_back(curr->val);

          if (curr->right != NULL)
            odd.push(curr->right);
          if (curr->left != NULL)
            odd.push(curr->left);
        }
      }
      level++;
      ans.push_back(res);
    }
    return ans;
  }
};
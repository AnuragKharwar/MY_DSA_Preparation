class Solution
{
  void path(vector<string> &result, TreeNode *root, string t)
  {
    if (!root->left && !root->right)
    {
      result.push_back(t);
      return;
    }

    if (root->left)
      path(result, root->left, t + "->" + to_string(root->left->val));
    if (root->right)
      path(result, root->right, t + "->" + to_string(root->right->val));
    // return result;
  }

public:
  vector<string> binaryTreePaths(TreeNode *root)
  {
    vector<string> result;
    string s;
    path(result, root, to_string(root->val));
    return result;
  }
};
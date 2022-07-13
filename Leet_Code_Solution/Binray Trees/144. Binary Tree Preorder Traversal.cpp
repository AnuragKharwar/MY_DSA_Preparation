class Solution
{
  vector<int> ans;

public:
  vector<int> preorderTraversal(TreeNode *root)
  {

    traverse(root);
    return ans;
  }
  void traverse(TreeNode *root)
  {
    if (!root)
      return;
    ans.push_back(root->val);
    traverse(root->left);
    traverse(root->right);
  }
};
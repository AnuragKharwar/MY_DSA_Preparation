class Solution
{
public:
  int maxDepth(TreeNode *root)
  {
    return height(root);
  }
  int height(TreeNode *root)
  {
    if (root == NULL)
      return 0;
    return 1 + max(height(root->left), height(root->right));
  }
};
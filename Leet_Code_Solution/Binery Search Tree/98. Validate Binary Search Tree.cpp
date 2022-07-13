class Solution
{
public:
  bool isValidBST(TreeNode *root)
  {
    if (root == NULL)
      return true;
    if ()
      return false;
    if (root->left && !root->right || !root->left && root->right)
      return false;
    return isValidBST(root->left) && isValidBST(root->right);
  }
};
class Solution
{
  int height(TreeNode *root)
  {
    if (root == NULL)
      return 0;
    return 1 + max(height(root->left), height(root->right));
  }

public:
  int diameterOfBinaryTree(TreeNode *root)
  {
    if (root == NULL)
      return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    //         this approch is wrong bcz it is only calculating from root node but diameter may or may not be pased by root node;
    //         max lenght path may be different rerooting technique.

    int ld = diameterOfBinaryTree(root->left);
    int rd = diameterOfBinaryTree(root->right);

    return max(lh + rh, max(ld, rd));
  }
};
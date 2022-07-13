class Solution
{

public:
  int tilt = 0;
  int helper(TreeNode *root)
  {
    if (root == NULL)
      return 0;
    int leftsum = helper(root->left);
    int rightsum = helper(root->right);
    tilt += abs(leftsum - rightsum);

    return rightsum + leftsum + root->val;
  }
  int findTilt(TreeNode *root)
  {
    if (root == NULL)
      return 0;
    helper(root);
    return tilt;
  }
};
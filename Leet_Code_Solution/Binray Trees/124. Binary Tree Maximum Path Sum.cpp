class Solution
{
  int maxPathsum = INT_MIN;
  int helper(TreeNode *root)
  {
    if (root == NULL)
      return 0;
    int leftDownPath = helper(root->left);
    int rightDownPath = helper(root->right);

    int curPathsum = root->val + max(0, leftDownPath) + max(0, rightDownPath);

    maxPathsum = max(maxPathsum, curPathsum);

    return max(0, max(leftDownPath, rightDownPath) + root->val);
  }

public:
  int maxPathSum(TreeNode *root)
  {
    helper(root);
    return maxPathsum;
  }
};
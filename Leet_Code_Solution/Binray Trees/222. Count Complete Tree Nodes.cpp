class Solution
{

  int leftdepthheight(TreeNode *root)
  {
    int ans = 0;
    if (root == NULL)
      return 0;
    while (root != NULL)
    {
      ans++;
      root = root->left;
    }
    return ans;
  }
  int rightdepthheight(TreeNode *root)
  {
    int ans = 0;
    if (root == NULL)
      return 0;
    while (root != NULL)
    {
      ans++;
      root = root->right;
    }
    return ans;
  }

public:
  int countNodes(TreeNode *root)
  {
    if (root == NULL)
      return 0;
    int left = leftdepthheight(root);
    int right = rightdepthheight(root);

    if (left == right)
      return pow(2, left) - 1;
    return 1 + countNodes(root->left) + countNodes(root->right);
  }
};
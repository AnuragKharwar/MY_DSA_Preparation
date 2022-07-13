class Solution
{

public:
  TreeNode *increasingBST(TreeNode *root, TreeNode *tail = NULL)
  {
    // TreeNode *tail=NULL;
    if (root == NULL)
      return tail;
    // t->left;
    TreeNode *res;
    res = increasingBST(root->left, root);
    root->left = NULL;
    root->right = increasingBST(root->right, tail);

    return res;
  }
};
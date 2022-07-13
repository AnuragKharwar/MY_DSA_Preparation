class Solution
{

  //     pasing parents
  int xlevel = 0;
  int ylevel = 0;
  int xparent = -1;
  int yparent = -1;
  void DFS(TreeNode *root, int x, int y, int level, int parent)

  {
    if (root == NULL)
      return;
    if (root->val == x)
    {
      xlevel = level;
      xparent = parent;
    }
    if (root->val == y)
    {
      ylevel = level;
      yparent = parent;
    }

    // if(root->left!=NULL)
    // {
    //     if(root->left->val==x) xparent=root->val;
    //     if(root->left->val==y) yparent=root->val;
    // }
    // if(root->right!=NULL)
    // {
    //     if(root->right->val==x) xparent=root->val;
    //     if(root->right->val==y) yparent=root->val;
    // }
    DFS(root->left, x, y, level + 1, root->val);
    DFS(root->right, x, y, level + 1, root->val);
  }

public:
  bool isCousins(TreeNode *root, int x, int y)
  {
    DFS(root, x, y, 0, -1);

    if (x == y)
      return false;
    if (xlevel != ylevel)
      return false;
    if (xparent == yparent)
      return false;
    return true;
  }
};

class Solution
{
  TreeNode *ans;
  void inorder(TreeNode *o, TreeNode *c, TreeNode *t)
  {
    if (o != NULL)
    {
      inorder(o->left, c->left, t);
      if (o == t)
      {
        ans = c;
      }
      inorder(o->right, c->right, t);
    }
  }

public:
  TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
  {
    inorder(original, cloned, target);
    return ans;
  }
};
class Solution
{
public:
  TreeNode *lca(TreeNode *root, TreeNode *p, TreeNode *q)
  {
    if (root == NULL)
      return NULL;
    if (p->val <= root->val && q->val >= root->val)
      return root;
    else if (p->val < root->val && q->val < root->val)
      return lca(root->left, p, q);
    else if (p->val > root->val && q->val > root->val)
      return lca(root->right, p, q);
    else
      return root;
  }
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
  {
    return lca(root, p, q);
  }
};
class Solution
{
public:
  //     bool helper(TreeNode *r1)
  //     {
  //         if(r1==NULL) return false;
  //         else
  //         {      TreeNode *temp=r1->left;
  //                r1->left=r1->right;
  //                r1->right=temp;

  //              return helper(r1->left)&&helper(r1->right);
  //         }

  //     }

  TreeNode *invertTree(TreeNode *root)
  {
    // helper(root->left);
    if (root == NULL)
      return root;

    swap(root->left, root->right);
    invertTree(root->left);
    invertTree(root->right);
    return root;
  }
};
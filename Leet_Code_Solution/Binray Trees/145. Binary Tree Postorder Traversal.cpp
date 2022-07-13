class Solution
{

public:
  vector<int> ans;
  vector<int> postorderTraversal(TreeNode *root)
  {

    DFSpost(root);
    return ans;
  }
  void DFSpost(TreeNode *root)
  {
    if (root == NULL)
      return;
    DFSpost(root->left);
    DFSpost(root->right);
    ans.push_back(root->val);
  }
};

class Solution
{
public:
  vector<int> rightSideView(TreeNode *root)
  {
    vector<int> ans;
    if (root == NULL)
      return ans;
    queue<TreeNode *> q;
    q.push(root);

    while (q.size())
    {
      int size = q.size();
      for (int i = 0; i < size; i++)
      {
        TreeNode *curr = q.front();
        q.pop();

        if (i == size - 1)
          ans.push_back(curr->val);
        if (curr->left != NULL)
          q.push(curr->left);
        if (curr->right != NULL)
          q.push(curr->right);
      }
    }
    return ans;
  }
};
class Solution
{
public:
  int maxLevelSum(TreeNode *root)
  {
    //        uisng BFS
    vector<int> ans;
    if (root == NULL)
      return 0;
    queue<TreeNode *> q;
    int sum = 0;
    q.push(root);

    while (!q.empty())
    {
      sum = 0;
      int size = q.size();
      while (size--)
      {
        TreeNode *curr = q.front();
        q.pop();
        if (curr->left != NULL)
          q.push(curr->left);
        if (curr->right != NULL)
          q.push(curr->right);
        sum += curr->val;
      }
      ans.push_back(sum);
    }

    int max = INT_MIN;
    int idx = 0;

    for (int i = 0; i < ans.size(); i++)
    {
      if (ans[i] > max)
      {
        max = ans[i];
        idx = i;
      }
    }
    return idx + 1;
  }
};
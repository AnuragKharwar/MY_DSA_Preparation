
class Solution
{
public:
  vector<int> ans;
  void pre(Node *root)
  {
    if (root == NULL)
      return;
    else
    {
      ans.push_back(root->val);
      for (auto it : root->children)
      {
        pre(it);
      }
    }
  }
  vector<int> preorder(Node *root)
  {
    pre(root);
    return ans;
  }
};
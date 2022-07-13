class Solution
{

public:
  vector<vector<int>> levelOrder(Node *root)
  {

    queue<Node *> q;
    q.push(root);
    Node *marker = new Node(-1);
    q.push(marker);
    vector<vector<int>> ans;
    vector<int> res;
    if (root == NULL)
      return ans;

    while (q.size() > 1)
    {
      Node *curr = q.front();
      q.pop();

      if (curr == marker)
      {
        ans.push_back(res);
        res = {};
        q.push(marker);
      }
      else
      {
        res.push_back(curr->val);
        for (Node *child : curr->children)
        {
          q.push(child);
        }
      }
    }
    if (res.size() > 0)
      ans.push_back(res);
    return ans;
  }
};
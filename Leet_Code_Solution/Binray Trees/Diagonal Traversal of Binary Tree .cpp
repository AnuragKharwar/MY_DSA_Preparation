
vector<int> diagonal(Node *root)
{
  // your code here
  queue<Node *> q;
  q.push(root);
  Node *curr = NULL;
  vector<int> ans;
  while (curr != NULL || q.size() > 0)
  {
    if (curr == NULL)
    {
      curr = q.front();
      q.pop();
      continue;
    }
    ans.push_back(curr->data);
    if (curr->left != NULL)
      q.push(curr->left);
    curr = curr->right;
  }
  return ans;
}
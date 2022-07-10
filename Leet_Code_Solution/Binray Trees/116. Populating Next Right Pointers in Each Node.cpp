// using level order O(n) sapce

class Solution
{
public:
  Node *connect(Node *root)
  {
    if (root == NULL)
      return NULL;
    queue<Node *> q;
    q.push(root);

    while (q.size())
    {
      int size = q.size();
      for (int i = 0; i < size; i++)
      {
        Node *curr = q.front();
        q.pop();

        if (i < size - 1)
          curr->next = q.front();

        if (curr->left != NULL)
          q.push(curr->left);
        if (curr->right != NULL)
          q.push(curr->right);
      }
    }
    return root;
  }
};
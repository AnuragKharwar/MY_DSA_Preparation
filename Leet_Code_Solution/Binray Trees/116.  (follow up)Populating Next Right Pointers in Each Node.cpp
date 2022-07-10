// Follow-up:

// You may only use constant extra space.
// The recursive approach is fine. You may assume implicit stack space does not count as extra space for this problem.
class Solution
{
public:
  Node *connect(Node *root)
  {
    Node *curr;
    curr = root;
    while (curr != NULL)
    {
      Node *head = NULL, *tail = NULL;
      while (curr != NULL)
      {
        if (curr->left != NULL)
        {

          if (head == NULL)
            head = tail = curr->left;
          else
          {
            tail->next = curr->left;
            tail = tail->next;
          }
        }
        if (curr->right != NULL)
        {
          if (head == NULL)
            head = tail = curr->right;
          else
          {
            tail->next = curr->right;
            tail = tail->next;
          }
        }
        curr = curr->next;
      }
      curr = head;
    }
    return root;
  }
};
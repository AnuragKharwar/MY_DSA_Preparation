class Solution
{
  bool ispath(ListNode *head, TreeNode *root)
  {
    if (head == NULL)
      return true;
    if (root == NULL)
      return false;

    if (head->val == root->val)
    {
      if (ispath(head->next, root->left) == true)
        return true;

      if (ispath(head->next, root->right) == true)
        return true;
    }

    return false;
  }

public:
  bool isSubPath(ListNode *head, TreeNode *root)
  {
    if (head == NULL)
      return false;
    if (root == NULL)
      return false;

    return (ispath(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right));
  }
};
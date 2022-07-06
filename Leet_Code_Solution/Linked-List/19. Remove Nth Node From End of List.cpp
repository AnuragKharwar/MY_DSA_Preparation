/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    ListNode *p, *q = NULL;

    int size = 0;

    if (head == NULL)
      return head;
    p = head;
    while (p != NULL)
    {
      size++;
      p = p->next;
    }
    int idx = size - n;
    p = head;
    for (int i = 0; i < idx; i++)
    {
      q = p;
      p = p->next;
    }
    if (idx == 0)
    {
      head = p->next;
      delete (p);
      return head;
    }
    q->next = p->next;
    delete (p);

    return head;
  }
};
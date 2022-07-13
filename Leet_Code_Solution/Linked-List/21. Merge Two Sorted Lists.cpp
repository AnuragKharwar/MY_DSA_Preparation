
class Solution
{
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    //         recursive approch
    if (list1 == NULL)
      return list2;
    if (list2 == NULL)
      return list1;

    //         comparing list1 pointer value and list2 pointer value
    if (list1->val <= list2->val)
    {
      list1->next = mergeTwoLists(list1->next, list2);
      return list1;
    }
    else
    {
      list2->next = mergeTwoLists(list1, list2->next);
      return list2;
    }
  }
};
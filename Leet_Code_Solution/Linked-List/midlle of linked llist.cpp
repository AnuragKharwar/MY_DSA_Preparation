
class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    // if(!head) return NULL;
    // ListNode *p=head;
    // int count=0;
    // while(p!=NULL)
    // {
    //     count++;
    //     p=p->next;
    // }
    // int mid=count/2;
    // p=head;
    // while(mid)
    // {
    //     p=p->next;
    //     mid--;
    // }
    // return p;

    //         using slow and fast pointer

    ListNode *slow = head, *fast = head;
    while (fast && fast->next)
    {
      slow = slow->next;
      fast = fast->next->next;
      ;
    }
    return slow;
  }
};
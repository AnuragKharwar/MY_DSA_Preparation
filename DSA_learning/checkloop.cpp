/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

} *head = nullptr;
void create(int A[], int n)
{
    head = new Node;
    Node *temp;
    Node *last;
    head->data = A[0];
    head->next = nullptr;
    last = head;
    for (int i = 1; i < n; i++)
    {
        struct Node *temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;

        last->next = temp;
        last = temp;
    }
}
// void loopcreate(struct Node *ptr)
// {
//     Node *p,*q;
//     p=ptr->next->next->next;
//     q=ptr->next->next->next->next->next->next->next->next->next->next->next;
//     q->next=p;
// }
int checkloop(struct Node *ptr)
{
    Node *p, *q;
    p = q = head;

    do
    {
        p = p->next;
        q = q->next;
        q = q != NULL ? q->next : q;

    } while (p && q && p != q);

    if (p == q)

        return true;
    else

        return false;
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << "\t";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    struct Node *t1, *t2;
    int A[] = {3, 44, 2, 3, 2, 2, 4, 2, 11, 4, 6, 8};
    int n = sizeof(A) / sizeof(A[0]);
    create(A, n);
    Display(head);
    t1 = head->next->next->next;
    t2 = head->next->next->next->next->next->next->next->next->next->next;
    t2->next = t1;

    // loopcreate(head);
    cout << checkloop(head);

    return 0;
}

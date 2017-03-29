///LeetCode 19. Remove Nth Node From End of List by C++
///write by LazyWolfLin in 17.03.29
///Create two pointers.First pointer move n nodes and then two pointers move
///together. When the first pointer arrive the end of list, the second pointer
///arrive the nth node from the end of list.

//Definition for singly-linked list.
/*
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
*/
class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode *quick = head, *slow = new ListNode(0), *tmp=slow;
        slow->next = head;
        while (n-- && quick != NULL) quick = quick->next;
        while (quick != NULL)
        {
            quick = quick->next;
            slow = slow->next;
        }
        delete tmp;
        tmp = slow->next;
        if (slow->next == head) head = head->next;
        else slow->next = slow->next->next;
        delete tmp;
        return head;
    }
};

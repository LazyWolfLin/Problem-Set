///LeetCode 2. Add Two Numbers by C++
///write by LazyWolfLin in 16.09.09

//Definition for singly-linked list.
/*
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};
*/
class Solution
{
public:
    ListNode* addTwoNumbers(ListNode *l1,ListNode *l2)
    {
        ListNode *ans=NULL,*tail;
        //initialize
        ans=new ListNode(l1->val+l2->val);
        tail=ans;
        int k=tail->val/10;
        tail->val=tail->val%10;
        //calculation
        ListNode *pos_l1=l1->next;
        ListNode *pos_l2=l2->next;
        int val_l1,val_l2;
        while (pos_l1!=NULL||pos_l2!=NULL)
        {
            if (pos_l1!=NULL)
            {
                val_l1=pos_l1->val;
                pos_l1=pos_l1->next;
            }
            else val_l1=0;
            if (pos_l2!=NULL)
            {
                val_l2=pos_l2->val;
                pos_l2=pos_l2->next;
            }
            else val_l2=0;
            tail->next=new ListNode(val_l1+val_l2+k);
            tail=tail->next;
            k=tail->val/10;
            tail->val=tail->val%10;
        }
        if (k!=0)
        {
            tail->next=new ListNode(k);
        }
        return ans;
    }
};

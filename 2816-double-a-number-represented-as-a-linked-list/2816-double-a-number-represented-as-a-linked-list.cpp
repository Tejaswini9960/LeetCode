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
class Solution {
public:
    ListNode* doubleIt(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=nullptr)
        {
            int newvalue=curr->val*2;
            if(newvalue<10)
            {
                curr->val=newvalue;
            }
            else
            {
                curr->val=newvalue%10;
                if(prev==nullptr)
                {
                    ListNode* p=new ListNode(1);
                    head=p;
                    head->next=curr;
                }
                else
                {
                    prev->val+=1;
                }
            }
            prev=curr;
            curr=curr->next;
        }
        return head;
        
    }
};
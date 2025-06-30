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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *curr=head;
        ListNode *prev=nullptr;
        ListNode *temp=head;
        if (head==nullptr || head->next==nullptr)
        return nullptr;
        while (temp && temp->next)
        {
            prev=curr;
            curr=curr->next;
            temp=temp->next->next;
        }
        if (prev)
        prev->next=curr->next;
        delete curr;
        return head;
    }
};

/* Time Complexity: O(n)
  Space Complexity: O(1)
  */

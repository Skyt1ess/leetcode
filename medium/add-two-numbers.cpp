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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(0);
        ListNode *cur = ans;
        int add = 0;
        while(l1 != nullptr || l2 != nullptr || add) {
            if (l1 != nullptr) {
                cur->val += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                cur->val += l2->val;
                l2 = l2->next;
            }
            add = cur->val / 10;
            cur->val = cur->val % 10;
            
            if(l1 || l2 || add) {
                ListNode *tmp = new ListNode(add);
                cur->next = tmp;
                cur = cur->next;
            }
        }

        return ans;
    }
};

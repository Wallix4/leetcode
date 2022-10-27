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
        ListNode *reverse(ListNode *pre, ListNode * cur){
        if(cur == nullptr){
            return pre;
        }
        ListNode *next = cur->next;
        cur->next = pre;
        return reverse(cur, next);
    }
    
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        return reverse(nullptr,head);
    }
};

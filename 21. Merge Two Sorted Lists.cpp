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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode *result = new ListNode();
        ListNode *head = nullptr;
        if(list2 == nullptr)
            return list1;
        if(list1 == nullptr)
            return list2;
        ListNode *pList1 = list1;
        ListNode *pList2 = list2;
        while(pList1 && pList2){
            if(head == nullptr){
                head = result;
                if(pList1->val <= pList2->val){
                    head->val = pList1->val;
                    pList1 = pList1->next;
                }
                else{
                    head->val = pList2->val;
                     pList2 = pList2->next;
                }
            }
            else{
                ListNode *tmp = new ListNode();
                  if(pList1->val <= pList2->val){
                    tmp->val = pList1->val;
                      pList1 = pList1->next;
                  }
                else{
                    tmp->val = pList2->val;
                    pList2 = pList2->next;
                }
                head->next = tmp;
                head = tmp;
            }
        }
        if(pList2 == nullptr){
            while(pList1){
                 ListNode *tmp = new ListNode();
                tmp->val = pList1->val;
                 pList1 = pList1->next;
                 head->next = tmp;
                head = tmp;
            }
        }
         if(pList1 == nullptr){
            while(pList2){
                 ListNode *tmp = new ListNode();
                tmp->val = pList2->val;
                 pList2 = pList2->next;
                 head->next = tmp;
                head = tmp;
            }
        }
        return result;
    }
};

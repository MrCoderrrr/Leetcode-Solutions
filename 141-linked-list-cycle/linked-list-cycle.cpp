/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr){
            return false;
        }
        ListNode* a = head;
        ListNode* b = head;
        do{
            if(a == nullptr || b == nullptr){
                return false;
            }
            if(b->next == nullptr){
                return false;
            }
            a = a->next;
            b = b->next->next;
        }
        while(a != b);

        return true;
    }
};
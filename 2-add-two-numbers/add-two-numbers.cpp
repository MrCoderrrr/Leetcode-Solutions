/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int sum(int a, int b, int c) { return a + b + c; }
    int sum(int a, int c) { return a + c; }
    int carry(int sum) { return sum / 10; }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = l1;
        ListNode* b = l2;
        int summ = 0;
        int r = 0;

        if (a == nullptr) return l2;
        if (b == nullptr) return l1;

        while (a->next != nullptr && b->next != nullptr) {
            summ = sum(a->val, b->val, r);
            a->val = summ % 10;
            r = carry(summ);
            a = a->next;
            b = b->next;
        }

        if (a->next == nullptr && b->next != nullptr) {
            summ = sum(a->val, b->val, r);
            a->val = summ % 10;
            r = carry(summ);
            
            a->next = b->next;
            a = a->next;

            while (a->next != nullptr) {
                summ = sum(a->val, r);
                a->val = summ % 10;
                r = carry(summ);
                a = a->next;
            }
                    summ = sum(a->val, r);
        a->val = summ % 10;
        r = carry(summ);
        } 
        else if (a->next != nullptr && b->next == nullptr) {
            summ = sum(a->val, b->val, r);
            a->val = summ % 10;
            r = carry(summ);
            
            a = a->next;

            while (a->next != nullptr) {
                summ = sum(a->val, r);
                a->val = summ % 10;
                r = carry(summ);
                a = a->next;
            }        summ = sum(a->val, r);
        a->val = summ % 10;
        r = carry(summ);
        } 
        else {
            summ = sum(a->val, b->val, r);
            a->val = summ % 10;
            r = carry(summ);
        }



        if (r > 0) {
            a->next = new ListNode(r);
        }

        return l1;
    }
};
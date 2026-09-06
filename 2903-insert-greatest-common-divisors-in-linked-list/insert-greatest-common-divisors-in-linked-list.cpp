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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        ListNode* forward;
        if(head != NULL){
            forward = head -> next;
        }
        while(forward != NULL){
            int divisor = gcd(curr -> val, forward -> val);
            ListNode* newNode = new ListNode(divisor);
            newNode -> next = curr -> next;
            curr -> next = newNode;
            forward = forward -> next;
            curr = newNode -> next;
        }
        return head;
    }
};
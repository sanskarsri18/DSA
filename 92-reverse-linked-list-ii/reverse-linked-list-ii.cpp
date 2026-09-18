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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right){
            return head;
        }
        ListNode* prevLeft = new ListNode(0, head);
        ListNode* dummy = prevLeft;
        for(int i = 1; i <left; i++){
            prevLeft = prevLeft -> next;
        }
        ListNode* prev = NULL;
        ListNode* curr = prevLeft -> next;
        ListNode* segmentStart = curr;

        for(int i = left; i <= right; i++){
            ListNode* forw = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forw;
        }
        prevLeft -> next = prev;
        segmentStart -> next = curr;
        return dummy -> next;
    }
};
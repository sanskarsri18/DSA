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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* temp = head;
        int n = 0;
        ListNode* c = head;
        while(c -> next){
            c = c -> next;
            n++;
        }
        n++;
        c-> next = head;
        k = k % n;
        int count = n - k - 1;
        while(count--){
            temp = temp -> next;
        }
        ListNode* nex = temp-> next;
        temp -> next = NULL;
        return nex;
    }
};
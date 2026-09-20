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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* nex = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return ;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* newHead = reverse(slow);
        ListNode* first = head;
        ListNode* second = newHead;
        while(second){
            ListNode* savedFirstNext = first -> next;
            ListNode* savedSecondNext = second -> next;
            first -> next = second;
            second -> next = savedFirstNext;
            first = savedFirstNext;
            second = savedSecondNext; 
        }
        if(first)
        first -> next = NULL;
    }
};
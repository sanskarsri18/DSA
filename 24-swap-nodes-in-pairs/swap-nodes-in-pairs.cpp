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
    void reverse(ListNode* head, int times){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(times--){
            ListNode* nex = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nex;
        }
        return;
    }

    ListNode* swapPairs(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode* left = head;
        ListNode* right;
        ListNode* res = NULL;
        ListNode* prevLeft = NULL;
        int size = 2;
        while(true){
            right = left;
            for(int i = 0 ; i < size - 1; i++){
                if(right == NULL){
                    break;
                }
                right = right -> next;
            }

            if(right){
                ListNode* nextLeft = right -> next;
                reverse(left, size);
                if(prevLeft){
                    prevLeft -> next = right;
                }
                prevLeft = left;
                if(res == NULL){
                    res = right;
                }
                left = nextLeft;
            }
            else{
                if(prevLeft){
                    prevLeft-> next = left;
                }
                if(res == NULL){
                    res = left;
                }
                break;
            }
        }
        return res;
    }
};
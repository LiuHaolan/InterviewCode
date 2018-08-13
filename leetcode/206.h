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

    
    
    ListNode* reverseList(ListNode* head) {
        
        if(head == 0){
            return 0;
        }
        
        ListNode* cur = head;
        ListNode* next_cur = head->next;
        head->next = 0;
        
        while(next_cur != 0){
            
            ListNode* tmp = next_cur->next;
            next_cur->next = cur;
            cur = next_cur;
            next_cur = tmp;
            
        }
        
        return cur;
        
    }
};
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
private:
    ListNode* solution(ListNode* current, ListNode* prev) {
        if (current == nullptr)
            return prev;
        ListNode * next = current-> next;
        current->next = prev;
        return solution(next, current);
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = nullptr;
        
        while (current != nullptr) {
            ListNode * next = current -> next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};

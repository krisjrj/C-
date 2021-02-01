//C
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL)
        return NULL;
    head->next = removeElements(head->next, val);
    return head->val == val ? head->next : head;

}
//C++
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

    ListNode* removeElements(ListNode* head, int val) {
        int count = 0;
        if (head == nullptr)
            return nullptr;
        head->next = removeElements(head->next, val);
        if (head->val == val)
            return head->next;
        else
            return head;
    }
};
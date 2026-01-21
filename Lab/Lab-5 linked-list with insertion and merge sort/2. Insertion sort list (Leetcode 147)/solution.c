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

 //in linked list there is no shifting, we must detach node and reinsert
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode dummy;
        dummy.val=0;
        dummy.next=NULL;

        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* nextNode=curr->next;

            //find position in sorted array
            ListNode* prev=&dummy;

            while(prev->next!=NULL && prev->next->val<curr->val){
                prev=prev->next;
            }

            //insert curr after prev node
            curr->next=prev->next;
            prev->next=curr;

            //move to next node
            curr=nextNode;
        }
        return dummy.next;
    }
};
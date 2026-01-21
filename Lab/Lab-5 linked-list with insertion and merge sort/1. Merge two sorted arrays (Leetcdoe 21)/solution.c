// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     struct ListNode *next;
//  * };
//  */

//in linked list qs its easier to think in recursive terms than in iterative terms
struct ListNode* mergeTwoLists(struct ListNode* head1, struct ListNode* head2) {
    if(head1==NULL || head2==NULL){
        return head1==NULL ? head2:head1;
    }
    if(head1->val<=head2->val){
        head1->next=mergeTwoLists(head1->next,head2);
        return head1;
    }
    else{
        head2->next=mergeTwoLists(head1,head2->next);
        return head2;
    }


}


// my try-
// struct ListNode* mergeTwoLists(struct ListNode* head1, struct ListNode* head2) {
//     ListNode* temp1=head1;
//     ListNode* temp2=head2

//     // ListNode* ans=NULL;

//     while(temp1!=NULL && temp2!=NULL){
//         if((temp1->val)<(temp2->val)){
//              Node* temp = head;
//              while (temp->next != NULL){
//                 temp = temp->next;
//             }
//             temp->next = temp1;
//             temp1=temp1->next
//         }
//         else{
//             temp->next=temp2;
//             temp2=temp2->next
//         }
//     }
//     while(temp1!=NULL){
//         Node* temp = head;
//              while (temp->next != NULL){
//                 temp = temp->next;
//             }
//             temp->next = temp1;
//             temp1=temp1->next
//     }
//     while(temp2!=NULL){
//         Node* temp = head;
//              while (temp->next != NULL){
//                 temp = temp->next;
//             }
//             temp->next = temp2;
//             temp2=temp2->next
//     }

//     return temp;

// }



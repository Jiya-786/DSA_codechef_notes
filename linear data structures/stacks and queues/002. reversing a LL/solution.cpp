#include <iostream>
using namespace std;
#include <vector>
#include <stack>

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};

ListNode* reverseLL(ListNode* head){
    ListNode* prev=NULL;
    ListNode* curr=head;

    if(curr==NULL){
        return NULL;
    }
    else if(curr->next==NULL){
        return head;
    }

    // while(curr->next!=NULL){
    while(curr!=NULL){
        ListNode* next=curr->next;
        curr->next=prev;        
        prev=curr;
        curr=next;
    }

    // return curr;
    return prev;

}

void printList(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main(){
    int n;
    cin>>n;

    if(n==0){
        cout<<"Empty list"<<endl;
        return 0;
    }
    else{
        int x;
        cin>>x;
        ListNode* head=new ListNode(x);
        ListNode* temp=head;

        for(int i=1;i<n;i++){
            cin>>x;
            temp->next=new ListNode(x);
            temp=temp->next;
        }
        head=reverseLL(head);
        printList(head);

    }
    return 0;
}

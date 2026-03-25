#include <iostream>
using namespace std;
#include <vector>
#include <stack>

// we can also solve this using the set 
// method that i submitted on leetcode

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};

bool isCycle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL && slow->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return true;
        }
        // return false;
    }
    return false;
}

int main(){
    // so we have to give input on our own because this is not leetcode so i gave
    // the input such the the last node of the linked list connects back to the node 
    //before it so we get a cycle for every input no matter what
    
    // but in std circular array last elt is connected back to first elt,
    // here i did not connect like that
    int n;
    cin>>n;

    int x;
    cin>>x;
    ListNode* head=new ListNode(x);
    ListNode* temp=head;
    ListNode* saved=head;

    for(int i=1;i<n-1;i++){
        ListNode* newNode=new ListNode(x);
        temp->next=newNode;
        temp=temp->next;
    }
    saved=temp;
    cin>>x;
    ListNode* newNode2=new ListNode(x);
    temp->next=newNode2;
    newNode2->next=saved;


    if(isCycle(head)) cout<<"true";
    else cout<<"false";

}
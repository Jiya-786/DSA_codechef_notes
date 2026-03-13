```cpp
// first for singly linked list
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void InsertAtBeginning(Node* &head){
    int val;
    cout<<"Enter value you want to insert: ";
    cin>>val;
    
    Node* newnode=new Node();
    newnode->data=val;
    newnode->next=NULL;
    
    newnode->next=head;
    head=newnode;
    
}

void Display(Node* &head){
    Node* temp=new Node();
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    if(temp->next==NULL){
        cout<<temp->data;
    }
    cout<<"\n";
}

void InsertAtEnd(Node* &head){
    int val;
    cout<<"Enter value you want to insert: ";
    cin>>val;
    Node* newnode=new Node();
    newnode->data=val;
    newnode->next=NULL;
    
    if(head==NULL){
        head=newnode;
        return;
    }
    
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    
}

void Search(Node* &head){
    int val;
    cout<<"Enter value you want to search: ";
    cin>>val;
    Node* temp=head;
    while(temp!=NULL && temp->next->data!=val){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Value not found");
        return;
    }
    printf("Value found");
    
    //more compact version-
    // while(temp!=NULL){
    //     if(temp->data==val){
    //         printf("Value found");
    //         return;
    //     }
    //     temp=temp->next;
    // }
    // cout<<"value not found";
}    

void DeleteNode(Node* &head){
    int val;
    cout<<"Enter value you want to delete: ";
    cin>>val;
    
    if(head==NULL){
        cout<<"value DNE";
        return;
    }
    else if(head->next==NULL){
        if(head->data==val){
            head=NULL;
            return;
        }
        cout<<"value not found";
        return;
    }

    Node* temp=head;
    // while(temp->next->data!=val && temp->next!=NULL){
    while(temp->next!=NULL && temp->next->data!=val){
        temp=temp->next;
    }
    if(temp->next==NULL){
        cout<<"value not found";
        return;
    }
    Node* NodeToDelete=temp->next;
    temp->next=temp->next->next;
    delete NodeToDelete;          // its imp to store the node to delete because without stroring later at this point if we do delete temp->next it will correspond to the node after the one whoch we wanted to delete sinnce the line before this line was executed.
}

int main(){
    int option;
    
    Node* head=NULL;
    while(true){
        printf("Enter the number corresponding to the required operation:\n");
    cout<<"1.Insert at beginning\n2.Insert at end\n3.Delete a node\n4.Search for a value\n5.Display the list\n6.Exit\n";
    cin>>option;
        if(option==1){
        InsertAtBeginning(head);
    }
    if(option==2){
        InsertAtEnd(head);
    }
    if(option==4){
        Search(head);
    }
    if(option == 3){
        DeleteNode(head);
    }
    if(option==5){
        Display(head);
    }
    if(option==6){
        break;
    }
    }
}
```


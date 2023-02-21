#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            data = d;
            next = NULL;
        }
};

void insertnode(node* &head, int i, int d){
    if(head==NULL){
        node* temp = new node(d);
        temp->next=head;
        head = temp;
        
    }
    else{
        node* temp = head;
        while(temp->data!=i){
            temp = temp->next;
        }
        node* newnode = new node(d);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void print(node* &head){
    node* newnode = head;
    while(newnode!=NULL){
        cout<<newnode->data<<" ";
        newnode = newnode->next;
    }cout<<endl;
}

node* reverselinklist1(node* &head){
    if(head==NULL || head->next==NULL ){
        return head;
    }
    node* curr = head;
    node* prev = NULL;
    node* frwd = NULL;

    while(curr!=NULL){
        frwd = curr->next;
        curr->next=prev;
        prev = curr;  
        curr = frwd;
    }

    return prev;

}

int main(){
    node* head = NULL;
    insertnode(head,3,15);
    print(head);
    insertnode(head,15,6);
    print(head);
    insertnode(head,6,7);
    print(head);
    insertnode(head,7,8);
    print(head);
    insertnode(head,8,19);
    print(head);
    node* reverse = reverselinklist1(head);
    print(reverse);
    return 0;
}
#include<iostream>
using namespace std;

class node{

    public:
        int data;
        node* next;

        node(int d){
            this->data=d;
            this->next=NULL;
        }

};

void prepend(node* &head, node* &tail, int d){
    if(head==NULL){
        node* temp = new node(d);
        temp->next=NULL;
        head = temp;
        tail = temp;
        
    }
    else{
        node* temp = new node(d);
        temp->next = head;
        head = temp;
    }
}
void append(node* &tail, node* &head, int d){
    if(tail==NULL){
        node* temp = new node(d);
        temp->next=NULL;
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(d);
        tail->next = temp;
        tail = temp;
    }
}
void insert(node* &tail, node* &head, int i, int d){ //i is position of node to inserted
    if(i==1){
        prepend(head, tail, d);
        return;
    }
    int j = 1;
    node* curr = head;
    while(j<i-1){
        curr = curr->next;
        j++;
    }
    node* temp = new node(d);
    temp->next = curr->next;
    curr->next = temp;
}
void print(node* &head){
    node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }cout<<endl;
}
node* kreverse(node* &head, int k){

    //base case
    if(head == NULL){
        return NULL;
    }

    //step 1 : reversing the first sub linked list of k nodes
    node* curr = head;
    node* frwd = NULL;
    node* prev = NULL;
    int cnt = 0;
    while (curr->next!=NULL && cnt<k)
    {
        frwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = frwd;
        cnt++;
    }

    //step 2:- recusion sambhal lega
    if(frwd!=NULL){
        head->next = kreverse(frwd, k);
    }

    //step 3:- return kar do first node
    return prev;

}
int main(){
    node* head = NULL;
    node* tail = NULL;
    prepend(head, tail, 6);
    prepend(head, tail, 5);
    append(tail, head, 7);
    append(tail, head, 9);
    insert(tail, head, 1, 4);
    insert(tail, head, 5, 8);
    append(tail, head, -1);
    print(head);
    node* reverse = kreverse(head, 2);
    print(reverse);

    return 0;
}
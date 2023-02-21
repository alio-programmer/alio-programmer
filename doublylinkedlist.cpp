#include<iostream>
using namespace std;
class node{
    public:
    int d;
    node* next;
    node* prev;

    node(int data){
        this->d=data;
        this->next= NULL;
        this->prev=NULL;
    } 
    ~node(){

    }
};

void append(node* &head, node* &tail, int val){
    if(tail==NULL){
        node* node1 = new node(val);
        head = node1;
        tail = node1;
    }
    else{
        node* temp = new node(val);
        tail->next= temp;
        temp->prev = tail;
        tail = temp;
    }
}
void prepend(node* &head, node* &tail, int val){
    if(head==NULL){
        node* node1 = new node(val);
        head = node1;
        tail = node1;
    }
    else{
        node* temp = new node(val);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insert(node* &head, node* &tail,int index, int val){
    node* temp = head;
    if(index==1){
        prepend(head, tail, val);
        return;
    }
    int i = 1;
    while(i<index-1){
        temp = temp->next;
        i++;
    }
    if(temp->next==NULL){
        append(head, tail,val);
        return;
    }
    node* newnode = new node(val);
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next=newnode;
    newnode->prev=temp;
}
void print(node* head){
    node* temp = head;
    cout<<"(";
    while(temp!= NULL){
        cout<<" "<<temp->d<<" ";
        temp = temp->next;
    }
    cout<<") -> The linked list";
    cout<<endl;
    cout<<endl;
}

int main(){
    node* head = NULL;
    node* tail = NULL;
    append(head, tail, 12);
    print(head);
    prepend(head, tail, 13l);
    print(head);
    append(head, tail, 15);
    print(head);
    prepend(head, tail, 11);
    print(head);
    insert(head, tail, 4, 17);
    print(head);
    return 0;
}
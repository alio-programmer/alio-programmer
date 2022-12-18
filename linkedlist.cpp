/*
this linked list performs the following:-
1)Insertion:-a)prepend(insert in front)
             b)append(insert at end)
             c)insert in middle using index
2)Deletion
3)Updation
*/
#include<iostream>
using namespace std;
class node{
    public:
    int d;
    node* next;

    node(int data){
        this->d = data;
        this->next = NULL;
    }
    ~node(){
        int value = this->d;
        if(this->next!=NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data:"<<value<<endl;

    }

};

void prepend(node* &head, int val){
    node* temp = new node(val);
    temp->next = head;
    head = temp;
}
void append(node* &tail, int val){
    node* temp= new node(val);
    tail->next = temp;
    tail = temp;    
}
void update(node* &head, int preval, int newval){
    node* curr=head;
    while(curr!=NULL){
        if(curr->d==preval){
           curr->d = newval;
           cout<<"the value is changed from:"<<preval<<" to:"<<newval<<endl;
           return;
        }
        curr = curr->next;
    }
    cout<<"no node wih value:"<<preval<<endl;
}
void deletenode(node* &head, int key){
    node* temp =  head;
    if(head->d==key){
        head = head->next;
        temp -> next = NULL;
        delete temp;
        return;
    }
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL){
        if(curr->d==key){
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    cout<<"no node with this value found"<<endl;

}
void insert(node* &tail, node* &head, int position, int val){
    if(position == 1){
        prepend(head, val);
        return;
    }
    node* temp = head;
    int j = 1;

    while(j<position){
        temp = temp->next;
        j++;
    }
    if(temp->next!=NULL){
        append(tail, val);
        return;
    }
    node* newnode = new node(val);
    newnode->next = temp->next;
    temp->next = newnode;
}
void print(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->d<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<endl;
}

int main(){

    node* node1= new node(19);
    node* head = node1;
    node* tail = node1;
    print(head);
    prepend(head, 15);
    print(head);
    prepend(head, 16);
    print(head);
    append(tail, 10);
    print(head);
    append(tail, 7);
    print(head);
    insert(tail, head, 3, 18);
    print(head);
    insert(tail, head, 6, 13);
    print(head);
    deletenode(head, 18);
    print(head);
    update(head, 19, 5);
    print(head);
    return 0;
}

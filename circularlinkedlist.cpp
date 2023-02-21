#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            data=d;
            next=NULL;
        }
    
};

void insertNode(node* &tail,int i, int d){
    //empty list
    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
        temp->next=temp;
    }
    //non empty list
    else{
        node* curr = tail;
        while(curr->data!=i){
            curr = curr->next;
        }
        //element found and curr is representing that element 
        node* temp = new node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}

void print(node* &tail){
    node* temp = tail;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=tail);
    cout<<endl;
}
int main(){
    node* tail = NULL;
    insertNode(tail,4,6);
    print(tail);
    insertNode(tail,6,8);
    print(tail);
    insertNode(tail,8,10);
    print(tail);
    insertNode(tail,10,12);
    print(tail);
    return 0;
}
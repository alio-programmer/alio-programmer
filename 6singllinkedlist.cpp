/*Important pointer concept to remember
1. &var_name is address of the var_name and it can be stored inside a pointer variabole lets say it is stored in *address
therefore *address = &var_name;
*/
#include<iostream>
using namespace std;
class node{
    public:
    int key;
    int data;
    node* next;
    node(){
        key=0;
        data=0;
        next=NULL;

    }
    node(int k, int d){
        key = k;
        data = d;

    }
};

class singlylinkedlist{
    public:
    node* head;

    singlylinkedlist(){
        head= NULL;
    }
    singlylinkedlist(node* n){ 
    /*this is pass by pointer method in this the memory location of variable is passed as the parameter in the function,
    and then operation are performed*/
        head=n;
    }
//1. check if node exist using key value
    node* nodeexists(int k)
    {
        node* temp= NULL;

        node* ptr= head;
        while(ptr!=NULL){
            if(ptr->key==k)
            {
                temp=ptr;
            }
            ptr= ptr->next;

        }
        return temp;   
    }
//2. append a node to the list

    void appendnode(node* n){
        if(nodeexists(n->key)!=NULL){
            cout<<"Node already exist of key value:"<<n->key<<". Append another node with different key value";
        }
        else
        { 
            if(head==NULL){
                head = n;
                cout<<"node appended"<<endl;
            }
            else{
                node* ptr= head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"node appended"<<endl;
            }

        }
    }
    //3. add a node at the start.
    void prependnode(node *n){
        if (nodeexists(n->key)!=NULL){
            cout<<"node already exist with key values:"<<n->key<<". Append another node with different key value"<<endl;
        }
        else{
            n->next=head;
            head= n;
            cout<<"node prepended."<<endl;

        }
    }
//4. insert a node in middle of a array
    void insertnode(int k, node *n){
        node *ptr = nodeexists(k);
        if(ptr==NULL){
            cout<<"no node exist with key value: "<<k<<endl;

        }
        else{
            if(nodeexists(n->key)!=NULL)
            {
                cout<<"Node already exists with key value:"<<n->key<<". Append another node with different key value"<<endl;
            }
            else{
                n->next=ptr->next;
                ptr->next=n;

            }
        }

    }
    void deletingnode(int k){
        if(head==NULL){
            cout<<"Singly linked list already empty can't delete."<<endl;
        }
        else if(head!=NULL)
        {
            if(head->key==k){
                head=head->next;
                cout<<"node unlinked with keys value: "<<k<<endl;
            }
            else{
                node* temp= NULL;
                node* prevptr=head;
                node* currentptr=head->next;
                while(currentptr!=NULL){
                    if(currentptr->key==k){ 
                        temp=currentptr;
                        currentptr=NULL;
                    }
                    else{
                        prevptr=prevptr->next;
                        currentptr=currentptr->next;
                    }
                }

            }
        }
    }


};


int main(){

    return 0;

}
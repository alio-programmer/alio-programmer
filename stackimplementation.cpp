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
        bool isempty(node* &head){
            if(head == NULL){
                return true;
            }
            return false;

        }
        bool isfull(int headcnt){
            if(headcnt==5){
                cout<<"the stack is full"<<endl;
                return true;
            }
            return false;

        }
        void push(node* &head, int d, int headcnt){
            if(head==NULL){
                node* temp = new node(d);
                head = temp;
                return;
            }
            if(headcnt>5){
                cout<<"Stack Overflow"<<endl;
                return;
            }
            node* temp = new node(d);
            temp->next = head;
            head = temp;
        }
        void pop(node* &head){
            if(isempty(head)){
                cout<<"Stack is empty!!!"<<endl;
                cout<<"Stack Underflow"<<endl;
            }
            node* temp = head;
            head = temp->next;
            temp->next = NULL;
            cout<<"Popped node is:"<<temp->data<<endl;
            cout<<endl;
            delete temp ;  
        }

        void peek(node* head){
            if(isempty(head)){
                cout<<"stack empty"<<endl;
                return;
            }
            cout<<head->data<<endl;
        }
        void printstack(node* &head){
            node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
            cout<<endl;
        }

int main(){
    node* head = NULL;
    int headcnt=1;
    int choice;
    do{
        int z;
        cout<<"what do you want to perform\n1)Push\n2)Pop\n3)Isfull\n4)Isempty\n5)Peek\n6)Print Stack"<<endl;
        cin>>z;
        switch(z){
            case 1:
                int d;
                cout<<"enter data to be pushed:";
                cin>>d;
                push(head,d,headcnt);
                headcnt++;
                break;
            
            case 2:
                pop(head);
                headcnt--;
                break;

            case 3:
                isfull(headcnt);
                break;

            case 4:
                isempty(head);
                break;

            case 5:
                peek(head);
                break;

            case 6:
                printstack(head);
                break;

            default:
                cout<<"Invalid choice"<<endl;;
        }
        cout<<"do you want to continue 1)Yes 2)No"<<endl;
        cin>>choice;
    }while(choice==1);
    return 0;
}
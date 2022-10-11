#include<iostream>
#include<string>
using namespace std;

class stack{
    private:
        int top;
        int arr[5];

    public:
    stack(){
        top = -1;

        for(int i=0; i<5; i++ ){

            arr[i]=0;                      //setting all the value inside the array as 0

            }  

    } 
    bool isEmpty(){

        if(top==-1)
            return true;
        else
            return false;
                    
    }
        
    bool isFull(){

        if(top==4)
            return true;
        else
            return false;
            
    }

    void push(int val){
        if(isFull()){
            cout<<"Stack overlow"<<endl;
        }
        else{
            bool abc=true;

            for(int i;i<5;i++){
                char choice3;
                top++;
                arr[top]=val;
                cout<<"do you want to continue 'Y' or 'N'"<<endl;
                cin>>choice3;
                if(choice3='Y' or 'y'){
                   ; 
                }
                else{
                    break;
                }
            }
        }
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return 0;
        }

        else{
            int popval = arr[top];
            arr[top] = 0;
            top-- ;
            return popval;


        }

    }
     void peek(){

        cout<<arr[top]<<endl;

     }
    
    void count(){

        cout<<top+1<<endl;

    }

    void change(){

        int position;
        int value;
        cout<<"Enter the position of value from bottom that you want to change"<<endl;
        cin>>position;
        cout<<"Enter the value that you want to change to"<<endl;
        cin>>value;

        arr[position-1]=value;

        cout<<"value changed"<<endl;

    }

    void display(){
        for(int i; i>-1; i--){

            cout<<arr[4]<<endl;

        }
    }

};

int main(){

    int choice;
    bool loop =true;
    stack obj1;
    while(loop){
        cout<<"What Stack operation do you want to perform"<<endl;
        cout<<"1) Push"<<endl;
        cout<<"2) Pop"<<endl;
        cout<<"3) Peek"<<endl;
        cout<<"4) count"<<endl;
        cout<<"5) Change"<<endl;
        cout<<"6) Display"<<endl;
        cin>>choice;
    
        if(choice==1){

            int val;
            char choice2;
            bool pqr=true;
            while(pqr){
                cout<<"Enter the value you want to push"<<endl;
                cin>>val;
                obj1.push(val);
                cout<<"To continue press 'Y' and to stop press 'N' "<<endl;
                cin>>choice2;
                if(choice2=='Y' or 'y'){
                    pqr=true;
                }
                else if(choice2=='N' or 'n'){
                    pqr=false;
                }
            }

        }

        else if(choice==2){

            obj1.pop();

        }
    
        else if(choice==3){

            obj1.peek();

        }
    
        else if(choice==4){

            obj1.count();

        }
    
        else if(choice==5){

            obj1.change();

        }

        else if(choice==6){

            obj1.display();

        }

        else{

            cout<<"Invalid Value"<<endl;

        }

    }

    return 0;

}
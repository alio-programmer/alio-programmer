#include <iostream>
using namespace std;
int main(){
    int A[3], B[3];
    int add[3], sub[3], mult[3];
    cout<<"Enter elements of array A"<<endl;
    for(int i=0; i<3; i++){
        cin>>A[i];
    }
    cout<<"Enter elements of array B"<<endl;
    for(int i=0; i<3; i++){
        cin>>B[i];
    }
    cout<<"addition array operation for the 2 arrays"<<endl;
    for(int i=0; i<3; i++){
        add[i]=A[i]+B[i];
        cout<<add[i]<<" ";
    }
    cout<<endl;
    cout<<"substraction array operation for the 2 arrays"<<endl;
    for(int i=0; i<3; i++){
        sub[i]=A[i]-B[i];
        cout<<sub[i]<<" ";
    }
    cout<<endl;
    cout<<"multiplication array operation for the 2 arrays"<<endl;
    for(int i=0; i<3; i++){
        mult[i]=A[i]*B[i];
        cout<<mult[i]<<" ";
    }
    
    return 0;
    
}
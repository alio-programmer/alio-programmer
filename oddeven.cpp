#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to be checked:";
    cin>>n;
    if(n%2==0){
        cout<<"The number is an even number";
    }
    else{
        cout<<"The number is an odd number";
    }
    return 0;
}
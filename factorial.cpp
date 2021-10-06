#include<iostream>
using namespace std;
int main(){
    //factorial of a number is like 5!=5*4*3*2*1
    int factorial, x, n;
    factorial=1;
    cout<<"enter number of which you want factorial"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    cout<<"the factorial of the number is: "<<factorial<<endl;

    return 0;
}
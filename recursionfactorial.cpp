#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"enter the number for which factorial needs to be calculated:";
    cin>>n;
    int result = factorial(n);
    cout<<result;
    return 0;
}
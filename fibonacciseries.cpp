#include<iostream>
using namespace std;
int main(){
    int first, second, third, n;
    cout<<"Enter the number of elements in the fibonacci series:";
    cin>>n;
    first=0;
    second=1;
    for(int i=1; i<=n; i++){
        cout<<" "<<first;
        third=first + second;
        first=second;
        second=third;
    }
    return 0;
}
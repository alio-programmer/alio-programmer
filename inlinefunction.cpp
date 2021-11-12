//inline function
#include<iostream>
using namespace std;
inline int add(int a, int b );
int main(){
    int a, b;
    cout<<"enter two integers to be added"<<endl;
    cin>>a>>b;
    int c= add(a,b);
    cout<<"the sum of the two integers is="<<c;
    return 0;
}
inline int add(int x, int y){
    return(x+y);
}
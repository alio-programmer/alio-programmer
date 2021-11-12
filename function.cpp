#include<bits/stdc++.h>
using namespace std;
int add(int a, int b); //forward declaration
int multiply(int a, int b); // forward declaration
int main(){
    int a,b;
    cout<<"Enter two number to be added and multiplied"<<"\n";

    cin>>a>>b;
    int c=add(a,b);
    int d=multiply(a,b);
    cout<<"the sum is: "<<c<<endl;
    cout<<"the product is: "<<d<<endl;
    return 0;
}
int add(int x, int y){
    int z=x+y;
    return z;

}
int multiply(int x, int y){
    int v=x*y;
    return v;

}
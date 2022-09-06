// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int const size=2;

struct student{
    int rollno;
    char name[20];
    double sgpa;
};
void accept(struct student arr1 [size]){
    cout<<"enter rollno, name and sgpa:"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr1[i].rollno>> arr1[i].name>> arr1[i].sgpa;
        cout<<endl;
    }
}

void display(struct student arr1[size]){
    cout<<"\n"<<"name"<<"\t"<<"rollno"<<"\t"<<"sgpa";
    for(int i=0; i<size; i++){
        cout<<"\n"<<arr1[i].name<<"\t"<<arr1[i].rollno<<"\t"<<arr1[i].sgpa<<endl;
    }
}

int main() {
    // Write C++ code here
    struct student data[20];
    accept(data);
    display(data);

    return 0;
}

#include<iostream>
using namespace std;
int main(){
    // taking values in a array
    int arr1[3]={1,2,3};
    double arr2[5];
    arr2[0]=1.456;
    arr2[1]=36.723;

    char arr3[5];
    arr3[0]='a';
    arr3[1]='e';
    arr3[2]='i';   
    arr3[3]='o';
    arr3[4]='u';
    int temp_arr[5];
    // taking values in array by iterating through for loop
    for(int i=0; i<5; i++){
        cout<<"enter the integer values to be entered in the array: ";
        cin>>temp_arr[i];
    }

    // printing the contents of the array
    cout<<"the array you typed is:-"<<endl;
    for(int i=0; i<5; i++){
        cout<<temp_arr[i]<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int reversearray(int arr1[], int n){
    for(int i=0; i<n-i-1; i++){
        swap( arr1[i], arr1[n-i-1]);
    }
}

int main(){
    int arr1[100];
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>arr1[i];
    }

    reversearray(arr1, size);

    cout<<"Priting array:-"<<endl;

    for(int i=0; i<size; i++){
        cout<<arr1[i]<<" ";
    }


    return 0;
}
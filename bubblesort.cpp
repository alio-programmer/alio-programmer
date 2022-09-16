#include<iostream>
using namespace std;

void bubblesort(int arr1[], int n){
    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr1[j]>arr1[j+1]){
                swap(arr1[j],arr1[j+1]);
            }
        }
    }
    for(int i; i<n; i++){
        cout<<arr1[i]<<endl;
    }
}

int main(){
    int x;
    cout<<"enter the number of element"<<endl;
    cin>>x;
    int arr[x];
    cout<<"enter the elements of array to b saved"<<endl;
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    bubblesort(arr,x);
    return 0;
}

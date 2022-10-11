#include<iostream>

using namespace std;

bool search(int arr1[], int size, int key){

    for(int i=0; i<size; i++){

        if(arr1[i]==key){

            return 1;

        }
    }
    return 0;

}
int main(){
    int arr1[100];
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    cout<<"enter the value to be insreted:-"<<endl;

    for(int i=0; i<size; i++){

        cin>>arr1[i];    
    }
    

    int key;
    cout<<"enter the key to be searched for:";
    cin>>key;

    bool result = search(arr1, size, key);

    if(result){
        cout<<"key found";
    }
    else{
        cout<<"key not found";
    }

    return 0;

}
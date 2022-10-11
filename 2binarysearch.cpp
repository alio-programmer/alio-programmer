#include<iostream>
using namespace std;
void accept(int arr1[], int size){
    for(int i= 0; i<size; i++){
        cin>>arr1[i];
    }
}
int binarysearch(int arr1[], int size, int key){
    int start=0;
    int end=size+1;
    int mid=(start+end)/2;
    
    while( start <= end){
        if(arr1[mid]==key){

            return mid;
        }
        else if( key > arr1[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;

        }
        mid= (start+end)/2;
    }
    return -1;

}
int main(){
    int arr1[100];
    int size;
    int key;
    cout<<"enter the size of array to be sorted:";
    cin>>size;
    cout<<"enter element to be inserted"<<endl;
    accept(arr1, size);
    cout<<"enter the key to be searched:";
    cin>>key;

    int search = binarysearch(arr1, size, key);

    cout<<"index of "<<key<<" is: "<<search;


    return 0;

}
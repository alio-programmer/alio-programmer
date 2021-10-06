/*#include<iostream>
using namespace std;
int main(){
    int first, second, third;
    cout<<"Enter the first number:";
    cin>>first;
    cout<<"Enter the second number:";
    cin>>second;
    cout<<"Enter the third number:";
    cin>>third;
    int greatest, secondgreatest, lowest;
    if(first>second){
        if(first>third){
            cout<<first<<" is the greatest number";
            greatest=first;
            if(third>second){
                secondgreatest=third;
                lowest=second;
            }
            else{
                secondgreatest=second;
                lowest=third;
            }
        }
        else{
            cout<<third<<" is the greates number";
            greatest=third;
            secondgreatest=first;
            lowest=second;
        }
    }
    else if(second>first){
        if(second>third){
            cout<<second<<" is the greatest number";
            greatest=second;
            if(first>third){
                secondgreatest=first;
                lowest=third;
            }
            else{
                secondgreatest=third;
                lowest=first;
            }
        }
        else{
            cout<<third<<" is the greatest number";
            greatest=third;
            secondgreatest=second;
            lowest=first;
        }
    }
    else{
        cout<<third<<" is the greatest number"<<endl;
    }
    cout<<"the ascending order of number is "<<greatest<<" > "<<secondgreatest<<" > "<<lowest;
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int first, second, third;
    int greatest, secondgretest, lowest;
    cout<<"enter the three numbers:"<<endl;
    cin>>first>>second>>third;
    if(first>second and first>third){
        cout<<first<<" is the greatest number";
    }
    else if(second>first and second>third){
        cout<<second<<" is the greatest number";
    }
    else{
        cout<<third<<" is the greatest number";
    }
    return 0;
}
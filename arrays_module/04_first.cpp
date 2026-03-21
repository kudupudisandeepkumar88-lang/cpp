#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int i,n=10,key;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter key :";
    cin>>key;
    for(i=0;i<n;i++)
    if(key=arr[i]){
        cout<<"Found at"<<i;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    cout<<"enter<<n<<elemets";
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    cout<<"enter key";
    cin>>key;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"elements found at"<<i;
            exit(0);
        }
    }
    cout<<"elements not found";
}
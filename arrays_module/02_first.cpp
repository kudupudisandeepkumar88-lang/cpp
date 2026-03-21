#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[5]={10,3,4,5,6};//sum code for array
    for(int i=0;i<4;i++){
        sum=arr[i]+sum;
       
    }
    cout<<sum<<endl;
}
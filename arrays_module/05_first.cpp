#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[5]={3,9,8,7,6};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}
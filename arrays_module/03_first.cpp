#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,10,335,45,6};
    int min=arr[0];
    for(int i=0;i<=5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min number is :"<<min;
}

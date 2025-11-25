#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"ENTER NUMBER :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n*2==sum)
    {
        cout<<"IT IS A PERFECT NO";
    }
    else{
        cout<<"IT IS NOT A PERFET NO";
    }
}
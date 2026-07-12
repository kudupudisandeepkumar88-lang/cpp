#include<iostream>
using namespace std;
int main(){
    int n1,n2,choice;
    do{
        cout<<"1.MULTIPLY\n";
        cout<<"2.DIVISION\n";
        cout<<"3.ADDITION\n";
        cout<<"4.SUBTRACTION\n";
        cout<<"enter choice";
        cin>>choice;
        cout<<"enter n1"<<endl;
        cin>>n1;
        cout<<"enter n2"<<endl;
        cin>>n2;
        if(choice==1){
            cout<<"multiply"<<(n1*n2)<<endl;
            break;
        }
        else if(choice==2){
            cout<<"division"<<(n1/n2)<<endl;
            break;
        }
        else if(choice==3){
            cout<<"addition"<<(n1+n2)<<endl;
            break;
        }
        else if(choice==4){
            cout<<"subtraction"<<(n1-n2)<<endl;
            break;
        }

    }while(choice !=5);
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if(n<m){
        cout<<"less";
    }
    else if(n==m){
        cout<<"equal";
    }
    else if(n>m){
        cout<<"greater";
    }
    return 0;
}
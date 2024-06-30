#include<bits/stdc++.h>
using namespace std;
int main(){
    string inp;
    cin>>inp;
    int l = inp.length();
    for(int a=0;a<l-1;a++){
        cout<<abs(inp[a+1] - inp[a]);
    }
    cout<<endl;
}
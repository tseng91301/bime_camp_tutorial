#include<bits/stdc++.h>
using namespace std;
int pow2(int in, int t){
    int outp = 1;
    for(int a=0;a<t;a++){
        outp *= in;
    }
    return outp;
}
int pow_plus(int &int_in){
    string inp = to_string(int_in);
    int l = inp.length();
    int ret = 0;
    for(int a=0;a<l;a++){
        ret += pow2(inp[a]-48, l);
    }
    return ret;
}
int main(){
    int inp1, inp2;
    cin>>inp1>>inp2;
    int num = 0;
    for(int a=inp1;a<=inp2;a++){
        if(a == pow_plus(a)){
            if(num != 0){
                cout<<" ";
            }
            num++;
            cout<<a;
        }
    }
    if(!num){
        cout<<"none"<<endl;
    }else{
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
bool is_prime(int inp){
    if(inp == 1){
        return 0;
    }
    int square = sqrt(inp);
    for(int a = 2; a<= square; a++){
        if(inp % a == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int l, h;
    while(cin>>l>>h){
        int num = 0;
        for(int a=l; a<= h;a++){
            if(is_prime(a)){
                num += 1;
            }
        }
        cout<<num<<endl;
    }
    
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int result = 0;
    for(int a=1;a<=N;a++){
        int amount;
        cin>>amount;
        result += a*amount;
    }
    cout<<result<<endl;
    return 0;
}
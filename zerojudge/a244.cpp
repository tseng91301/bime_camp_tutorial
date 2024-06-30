#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int a=0;a<N;a++){
        int opr;
        cin>>opr;
        long long n1, n2;
        cin >> n1 >> n2;
        switch(opr){
            case 1:
                cout<<n1 + n2<<endl;
                break;
            case 2:
                cout<<n1 - n2<<endl;
                break;
            case 3:
                cout<<n1 * n2<<endl;
                break;
            case 4:
                cout<<n1 / n2<<endl;
                break;
        }
    }
}
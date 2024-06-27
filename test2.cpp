#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "N Q t { j S Y Z G N R J & & &";
    int l = str.length();
    for(int a=0;a<l;a++){
        if(str[a]==' '){
            continue;
        }
        cout<<(char)(str[a]-5)<<" ";
    }
    cout<<endl;
}
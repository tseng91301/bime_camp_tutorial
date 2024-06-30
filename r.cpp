#include<bits/stdc++.h>
using namespace std;
int main(){
    char *a = new char[10];
    a[11] += 1;
    cout<<a[10]<<endl;
    delete[] a;
}
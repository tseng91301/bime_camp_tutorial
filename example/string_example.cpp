#include<iostream>
#include<cstring>
using namespace std; // 使用std命名空間
int main(){
    string s1 = "abc"; // 指定s1是"abc"
    string s2;
    cout<<"Input s2: ";
    cin>>s2; // 讓用戶輸入s2
    string s3 = s1 + s2; // 使用 '+' 將兩個string結合再一起，儲存結果於s3
    cout<<s3<<endl; // 輸出s3字串
    cout<<s3[3]<<endl; // 輸出s3的第3個字元
}
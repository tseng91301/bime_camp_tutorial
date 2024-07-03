#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> scores; // 宣告一個vector並指定存放的資料型態為int
    for(int a=0;a<100;a++){
        scores.push_back(a+1); // 在後面插入a的值
    }
    cout<<"Size of scores: "<<scores.size()<<endl; // scores.size() 輸出scores目前的長度
    scores[49] = 1000; // 將scores的第49項改成1000
    for(int a=99;a>=0;a--){
        cout<<scores[a]<<", ";
        scores.pop_back(); // 刪除scores的最後一個元素
    }
    cout<<endl;
    cout<<"Size of scores: "<<scores.size()<<endl;
}
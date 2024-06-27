#include<iostream>
#include<time.h>
using namespace std;
int main(){
    srand(time(nullptr)); // 使用當前的時間製作一個rand種子值
    while(1){
        int rd = rand()%10; //產生0到9之間的隨機數
        cout<<rd<<endl;
        if(rd == 5){
            break; // 如果隨機生成的數字 = 5時，跳出迴圈
        }
    }
}
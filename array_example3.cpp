/*這個程式碼是6小隊輔「阿瑋」教我的，他是修過資工系DSA課程的大電神*/
#include<iostream>
using namespace std;
int main(){
    int amount = 10;
    int *arr;
    arr = (int*)malloc(sizeof(int) * amount); // 指定arr這個指標存放10個int的記憶體大小
    for(int a=0;a<amount;a++){
        arr[a] = a;
    }
    cout<<"The origin array: ";
    for(int a=0;a<amount;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
    amount += 5;
    arr = (int*)realloc(arr, sizeof(int) * amount); // 為arr重新分配15個int的記憶體大小
    for(int a=10;a<amount;a++){
        arr[a] = amount - a;
    }
    cout<<"The altered array: ";
    for(int a=0;a<amount;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
    free(arr);
}
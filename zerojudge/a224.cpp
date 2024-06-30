#include<bits/stdc++.h>
using namespace std;
int find_num(string &inp, char to_find){
    int l = inp.length();
    int outp = 0;
    for(int a=0;a<l;a++){
        if(inp[a] == to_find){
            outp += 1;
        }
    }
    return outp;
}
bool in(vector<char> &dict, char to_find){
    int l = dict.size();
    for(int a=0;a<l;a++){
        if(to_find == dict[a]){
            return 1;
        }
    }
    return 0;
}
int main(){
    string inp1;
    while(cin>>inp1){
        string inp;
        int l = inp1.length();
        for(int a=0;a<l;a++){
            // 將字元小寫的部分轉換為大寫
            if(inp1[a]>='a' && inp1[a]<='z'){
                inp1[a] -= ('a' - 'A');
            }
            // 將就的字串非英文單子的字元去除並儲存到新的字串中
            if(inp1[a] >= 'A' && inp1[a] <= 'Z'){
                inp += inp1[a];
            }
        }
        l = inp.length();
        int odd_num = 0;
        vector<char> dict; // 創建用來記錄已記錄過的字元之vector陣列
        for(int a=0;a<l;a++){
            char t1 = inp[a];
            if(in(dict, t1)){
                continue;
            }
            dict.push_back(t1);
            int num = find_num(inp, t1);
            if(num % 2){
                odd_num += 1;
            }
            if(odd_num >= 2){ // 如果字串裡面有超過兩種字元是奇數個，代表無法形成回文
                cout<<"no..."<<endl;
                break;
            }
        }
        if(odd_num <= 1){
            cout<<"yes !"<<endl;
        }
    }
    
}
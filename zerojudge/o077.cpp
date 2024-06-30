#include<bits/stdc++.h>
using namespace std;
void draw(vector<vector<int>> &map, int centerX, int centerY, int drawX, int drawY, int t, int x){
    int t_in = abs(drawX-centerX) + abs(drawY - centerY);
    if(t_in > t){
        return;
    }
    int Xmax = map.size();
    int Ymax = map[0].size();
    if(drawX < 0 || drawX >= Xmax){
        return;
    }
    if(drawY < 0 || drawY >= Ymax){
        return;
    }
    map[drawX][drawY] += x;
}
int main(){
    int H, W, N;
    cin>>H>>W>>N;
    vector<vector<int>> map;
    for(int a=0;a<H;a++){
        vector<int> t1;
        for(int b=0;b<W;b++){
            t1.push_back(0);
        }
        map.push_back(t1);
    }
    for(int a=0;a<N;a++){
        int r, c, t, x;
        cin>>r>>c>>t>>x;
        int Xmin = r-t;
        int Xmax = r+t;
        int Ymin = c-t;
        int Ymax = c+t;
        for(int b=Xmin;b<=Xmax;b++){
            for(int d=Ymin;d<=Ymax;d++){
                draw(map, r, c, b, d, t, x);
            }
        }
    }
    for(int a=0;a<H;a++){
        for(int b=0;b<W;b++){
            cout<<map[a][b]<<" ";
        }
        cout<<endl;
    }
}
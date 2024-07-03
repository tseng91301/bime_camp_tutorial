#include<iostream>
using namespace std;
int main(){
    int cube[6][2][2];
    for(int a = 0;a<6;a++){
        cout<<"Please input the "<<a + 1<<"th plane of the cube: "<<endl; // 這裡大家都用th，但其實1 是st，2 是nd，3 是rd，可以想看看怎麼改
        for(int b=0;b<2;b++){
            cout<<"Row "<<(b+1)<<": "<<endl;
            for(int c=0;c<2;c++){
                cout<<"Column "<<(c+1)<<": ";
                cin>>cube[a][b][c];
            }
        }
    }
    cout<<"The 2nd plane of cube is: "<<endl;
    for(int a=0;a<2;a++){
        for(int b=0;b<2;b++){
            cout<<cube[1][a][b]<<", ";
        }
        cout<<endl;
    }
}
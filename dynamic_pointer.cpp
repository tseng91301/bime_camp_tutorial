#include<bits/stdc++.h>
using namespace std;
int answer1,answer2,answer3;
int N;
void minit(int **in,int s){
    for(int a=0;a<s;a++){
        for(int b=0;b<s;b++){
            in[a][b]=0;
        }
    }
    in[8][8]=in[8][10]=in[9][9]=in[10][9]=in[11][8]=in[11][10]=1;
}
int cn(int **in,int posx,int posy,int border,int f){
    int n=0;
    if(posx==0){
        if(posy==0){
            n+=int(in[posx+1][posy+1]-f==0);
            n+=int(in[posx][posy+1]-f==0);
            n+=int(in[posx+1][posy]-f==0);
        }else if(posy==border-1){
            n+=int(in[posx][posy-1]-f==0);
            n+=int(in[posx+1][posy]-f==0);
            n+=int(in[posx+1][posy-1]-f==0);
        }else{
            n+=int(in[posx][posy+1]-f==0);
            n+=int(in[posx][posy-1]-f==0);
            n+=int(in[posx+1][posy+1]-f==0);
            n+=int(in[posx+1][posy]-f==0);
            n+=int(in[posx+1][posy-1]-f==0);
        }
        n+=int(in[posx+1][posy]-f==0);
        n+=int(in[posx+1][posy+1]-f==0);
    }else if(posx==border-1){
        if(posy==0){
            n+=int(in[posx-1][posy]-f==0);
            n+=int(in[posx-1][posy+1]-f==0);
            n+=int(in[posx][posy+1]-f==0);
        }else if(posy==border-1){
            n+=int(in[posx-1][posy-1]-f==0);
            n+=int(in[posx-1][posy]-f==0);
            n+=int(in[posx][posy-1]-f==0);
        }else{
            n+=int(in[posx][posy+1]-f==0);
            n+=int(in[posx][posy-1]-f==0);
            n+=int(in[posx-1][posy+1]-f==0);
            n+=int(in[posx-1][posy]-f==0);
            n+=int(in[posx-1][posy-1]-f==0);
        }
    }else{
        if(posy==0){
            n+=int(in[posx][posy+1]-f==0);
            n+=int(in[posx-1][posy]-f==0);
            n+=int(in[posx-1][posy+1]-f==0);
            n+=int(in[posx+1][posy]-f==0);
            n+=int(in[posx+1][posy+1]-f==0);
        }else if(posy==border-1){
            n+=int(in[posx][posy-1]-f==0);
            n+=int(in[posx+1][posy]-f==0);
            n+=int(in[posx+1][posy-1]-f==0);
            n+=int(in[posx-1][posy]-f==0);
            n+=int(in[posx-1][posy-1]-f==0);
        }else{
            n+=int(in[posx-1][posy-1]-f==0);
            n+=int(in[posx-1][posy]-f==0);
            n+=int(in[posx-1][posy+1]-f==0);
            n+=int(in[posx][posy-1]-f==0);
            n+=int(in[posx][posy+1]-f==0);
            n+=int(in[posx+1][posy-1]-f==0);
            n+=int(in[posx+1][posy]-f==0);
            n+=int(in[posx+1][posy+1]-f==0);

        }
    }
    return n;
}
void mstep(int **in1,int s){
    int **in=new int*[s];
    for(int a=0;a<s;a++){
        in[a]=new int[s];
        for(int b=0;b<s;b++){
            in[a][b]=in1[a][b];
        }
    }
    for(int a=0;a<s;a++){
        for(int b=0;b<s;b++){
            if(in1[a][b]){
                if(cn(in1,a,b,s,1)<2){
                    in[a][b]=0;
                }else if(cn(in1,a,b,s,1)>3){
                    in[a][b]=0;
                }
            }else{
                if(cn(in1,a,b,s,1)==3){
                    in[a][b]=1;
                }
            }
        }
    }
    for(int a=0;a<s;a++){
        for(int b=0;b<s;b++){
            in1[a][b]=in[a][b];
        }
        delete[] in[a];
    }
    delete[] in;
}
void dump(int **in,int s){
    for(int a=0;a<s;a++){
        for(int b=0;b<s;b++){
            cout<<in[a][b]<<" ";
        }
        cout<<endl;
    }
}
int cali(int **in, int s){
    int o=0;
    for(int a=0;a<s;a++){
        for(int b=0;b<s;b++){
            o+=in[a][b];
        }
    }
    return o;
}
int main(){
    cin>>N;
    int border=20;
    int **map=new int*[border];
    for(int a=0;a<border;a++){
        map[a]=new int[border];
    }

    //map init
    minit(map,border);

    //first generation
    //dump(map,border);
    answer1=cali(map,border);
    cout<<answer1<<endl;

    //second generation
    mstep(map,border);
    cout<<endl;
    //dump(map,border);
    answer2=cali(map,border);
    cout<<answer2<<endl;

    //map init
    minit(map,border);

    for(int a=0;a<N-1;a++){
        mstep(map,border);
    }
    cout<<endl;
    answer3=cali(map,border);
    //dump(map,border);
    cout<<answer3<<endl;

}
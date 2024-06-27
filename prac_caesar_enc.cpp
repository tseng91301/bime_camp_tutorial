#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    // string str = "I lOVE NTU BIME SO MUCH, AS WELL AS NTU BIMECAMP, YEEEE!";
    string str = "S lYFO XDE LSWO CY WEMR, KC GOVV KC XDE LSWOMKWZ, IOOOO!";
    int l = str.length();
    for(int a=0;a<l;a++){
        if(str[a] >= 'A' && str[a] <= 'Z'){
            str[a] -= 10;
            if(str[a] > 'Z'){
                str[a] -= 26;
            }else if(str[a] < 'A'){
                str[a] += 26;
            }
        }
        
    }
    cout<<str<<endl;

}
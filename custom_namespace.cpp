#include<bits/stdc++.h>
namespace CustomNamespace { // 創建一個命名空間'CustomNamespace'
    void func(){
        std::cout<<"This is from CustomNamespace"<<std::endl;
    }
}
void func(){
    std::cout<<"This is from outside"<<std::endl;
}
int main(){
    func();
    CustomNamespace::func();
}
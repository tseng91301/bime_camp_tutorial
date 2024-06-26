#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    if (a > 5) { // 外層的 if-else
        if (b > 15) { // 內層的 if-else (滿足 a > 5 才會進來)
            cout << "a bigger than 5 and b bigger than 15" << endl;
        } else {
            cout << "a bigger than 5 but b not bigger than 15" << endl;
        }
    } else {
        cout << "a not bigger than 5" << endl;
    }
    return 0;
}
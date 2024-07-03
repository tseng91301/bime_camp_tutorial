#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    if (a > 5) { // 外層的 if-else
        if (b > 15) { // 內層的 if-else (滿足 a > 5 才會進來)
            cout << "a is bigger than 5 and b is bigger than 15" << endl;
        } else {
            cout << "a is bigger than 5 but b is not bigger than 15" << endl;
        }
    } else {
        cout << "a is not bigger than 5" << endl;
    }
    return 0;
}
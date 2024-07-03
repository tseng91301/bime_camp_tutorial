#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int number = 10;
    cout << "Fibonacci number at position " << number << " is " << fibonacci(number) << endl;
    // Output: Fibonacci number at position 10 is 55
    return 0;
}
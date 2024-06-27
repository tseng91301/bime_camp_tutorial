#include <iostream>
#include <stdexcept>
using namespace std;

/*寫完可以是看看自己寫一個==的邏輯運算子(Fraction無法直接使用==)*/

class Fraction {
private:
    int numerator; // 分子
    int denominator; // 分母

public:

    void reduce() { // 用來簡化分數的函式(約分)
        int gcdValue = gcd(numerator, denominator); // 取分子和分母的最大公因數
        numerator /= gcdValue;
        denominator /= gcdValue;
    }

    int gcd(int a, int b) { // 用來算出最大公因數的function
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }

    int lcm(int a, int b){ // 用來計算最小公倍數的function
        return (a / gcd(a, b)) * b;
    }


    // Implementation function
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        if (denominator == 0) { // 如果分母 = 0 時
            throw invalid_argument("Denominator cannot be zero"); // throw 出一個 Denominator cannot be zero 的錯誤訊息
        }
        reduce(); // 對輸入的分數約分
    }

    Fraction add(const Fraction& other){ // 與另一個分數相加
        int commonDenominator = lcm(denominator, other.denominator); // 求通分的分母(用最小公倍數)
        int num1 = numerator * (commonDenominator / denominator);
        int num2 = other.numerator * (commonDenominator / other.denominator);
        int newNumerator = num1 + num2;
        return Fraction(newNumerator, commonDenominator); // 回傳相加之後的分數
    }

    Fraction subtract(const Fraction& other){ // 與另一個分數相減
        int commonDenominator = lcm(denominator, other.denominator); // 求通分的分母(用最小公倍數)
        int num1 = numerator * (commonDenominator / denominator);
        int num2 = other.numerator * (commonDenominator / other.denominator);
        int newNumerator = num1 - num2;
        return Fraction(newNumerator, commonDenominator); // 回傳相減之後的分數
    }

    Fraction multiply(const Fraction& other){ // 與另一個分數相乘
        int newNumerator = numerator * other.numerator; // 分子相乘
        int newDenominator = denominator * other.denominator; // 分母相乘
        return Fraction(newNumerator, newDenominator); // 回傳相乘之後的分數
    }

    Fraction divide(const Fraction& other){
        if (other.numerator == 0) { // 如果除數(分數)是0
            throw invalid_argument("Cannot divide by zero fraction"); // throw 出一個 Denominator cannot be zero fraction 的錯誤訊息
        }
        // 進行分數相除的計算
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return Fraction(newNumerator, newDenominator); // 回傳相除後的分數
    }

    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);

    bool operator==(const Fraction& inp){
        if((numerator == inp.numerator) && (denominator == inp.denominator)){
            return true;
        }
        return false;
    }

    void print(){ // 將分數顯示出來
        cout << numerator << "/" << denominator << endl;
    }
};

Fraction Fraction::operator+(const Fraction& f2){ // 設定 + 法運算子
    return add(f2);
}
Fraction Fraction::operator-(const Fraction& f2){ // 設定 - 法運算子
    return subtract(f2);
}
Fraction Fraction::operator*(const Fraction& f2){ // 設定 * 法運算子
    return multiply(f2);
}
Fraction Fraction::operator/(const Fraction& f2){ // 設定 / 法運算子
    return divide(f2);
}

int main() {
    try {
        Fraction f1(3, 4); // f1 = 3/4
        Fraction f2(2, 5); // f2 = 2/5

        cout << "Fraction 1: ";
        f1.print();

        cout << "Fraction 2: ";
        f2.print();

        Fraction result = f1.add(f2);
        cout << "Sum: ";
        result.print();
        result = f1 + f2;
        cout << "Sum (function): ";
        result.print();

        result = f1 - f2;
        cout << "Difference: ";
        result.print();
        result = f1.subtract(f2);
        cout << "Difference (function): ";
        result.print();

        result = f1 * f2;
        cout << "Product: ";
        result.print();
        result = f1.multiply(f2);
        cout << "Product (function): ";
        result.print();

        result = f1 / f2;
        cout << "Quotient: ";
        result.print();
        result = f1.divide(f2);
        cout << "Quotient (function): ";
        result.print();
    } catch (const exception& e) {
        cerr << e.what() << endl; // e.what() 輸出上面throw的錯誤訊息, cerr輸出錯誤訊息
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Complex
{
    private:
        double realPart;
        double imaginaryPart;
    public:
        void assignNewValues(double real, double imag){ // 賦予此Complex一個值
            realPart = real;
            imaginaryPart = imag;
        }
        Complex(){} // Implementation function
        Complex(double real, double imag){
            assignNewValues(real, imag);
        }
        void showComplexValues()
        {
            char sign = '+';
            if(imaginaryPart < 0) sign = '-';
                cout << "The complex number is " 
                     << realPart << ' ' << sign << ' ' << abs(imaginaryPart) << "i\n";
        }
        Complex operator+(const Complex&);  // 將加法的運算子overload(讓Complex相加變得有意義)
        Complex operator-(const Complex& complex2){ // 與上述相同
            Complex temp;
            temp.realPart = realPart - complex2.realPart;
            temp.imaginaryPart = imaginaryPart - complex2.imaginaryPart;
            return temp;
        }
        
};
Complex Complex::operator+(const Complex& complex2){ // class function 也可以放在外面，但要加上 <class name>::
    Complex temp;
    temp.realPart = realPart + complex2.realPart;
    temp.imaginaryPart = imaginaryPart + complex2.imaginaryPart;
    return temp;
}
int main()
{
    Complex a, b, c(6.8,9.7);  // 宣告a, b, c三個Complex
    b.assignNewValues(5.3, -8.4); // 賦予 b 一個新值
    a.showComplexValues();
    b.showComplexValues();
    c.showComplexValues();

    Complex add_c = b + c; // 執行operator+的功能
    Complex sub_c = b - c; // 執行operator-的功能
    add_c.showComplexValues();
    sub_c.showComplexValues();
    return 0;
}
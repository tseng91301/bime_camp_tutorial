#include<bits/stdc++.h>
using namespace std;
class Complex
{
    private:
        double realPart;
        double imaginaryPart;
    public:
        void assignNewValues(double real, double imag){
            realPart = real;
            imaginaryPart = imag;
        }
        Complex(){}
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
        Complex operator+(const Complex&);  // prototype for the addition operator
        Complex operator-(const Complex& complex2){
            Complex temp;
            temp.realPart = realPart - complex2.realPart;
            temp.imaginaryPart = imaginaryPart - complex2.imaginaryPart;
            return temp;
        }
        
};
Complex Complex::operator+(const Complex& complex2)
{
    Complex temp;
    temp.realPart = realPart + complex2.realPart;
    temp.imaginaryPart = imaginaryPart + complex2.imaginaryPart;
    return temp;
}
int main()
{
    Complex a, b, c(6.8,9.7);  // declare 3 objects
    // Assign new values to object b's data members
    b.assignNewValues(5.3, -8.4);
    a.showComplexValues();   // display object a's values
    b.showComplexValues();   // display object b's values
    c.showComplexValues();   // display object c's values

    Complex add_c = b + c;
    Complex sub_c = b - c;
    add_c.showComplexValues();
    sub_c.showComplexValues();
    return 0;
}
//
//  main.cpp
//  6_Constructor_and_Destructor
//
//  Created by 세광 on 2021/06/18.
//

#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;
    
public:
    // Complex() : real(0), imag(0) { }
    Complex(double real = 0, double imag = 0) : real(real), imag(imag) { }
    void SetReal(double real_);
    void SetImag(double imag_);
    double GetReal();
    double GetImag();
};

int main() {
    Complex c1;
    Complex c2 = Complex(2, 3);
    Complex c3(4, 5);
    
    cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
    cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
    cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;
    
    c1.SetReal(3);
    c1.SetImag(2);
    
    cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
}

void Complex::SetReal(double real_) { real = real_; }
void Complex::SetImag(double imag_) { imag = imag_; }
double Complex::GetReal() { return real; }
double Complex::GetImag() { return imag; }

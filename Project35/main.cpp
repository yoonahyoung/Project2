#include <iostream>

using namespace std;

class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real, int imaginary)
        : _real(real), _imaginary(imaginary) {}


    Complex& operator+(Complex& ref) {
        Complex temp(_real + ref._real, _imaginary + ref._imaginary);

        return temp;
    }

    Complex& operator-(Complex& ref) {
        Complex temp(_real - ref._real, _imaginary - ref._imaginary);

        return temp;
    }

    void printValue() {
        cout << _real << showpos << _imaginary << "i" << endl;
        cout << noshowpos;
    }
};

// 연산자 오버로딩


int main() {

    Complex a(10, 10);
    Complex b(20, 20);

    Complex c = a + b;
    //Complex c = a.operator+(b);
    c.printValue();


    c = a - b;
    c.printValue();





    return 0;
}

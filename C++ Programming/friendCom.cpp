#include <iostream>
using namespace std;
class Complex {
    float real;
    float imaginary;

public:
    Complex(float r = 0, float i = 0) : real(r), imaginary(i) {}

    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

Complex operator+(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.2, 0.8);
    Complex c3 = c1 + c2;

    c1.display(); // Output: 2.5 + 3.7i
    c2.display(); // Output: 1.2 + 0.8i
    c3.display(); // Output: 3.7 + 4.5i

    return 0;
}

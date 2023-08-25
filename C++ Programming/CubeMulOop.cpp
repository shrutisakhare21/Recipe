#include <iostream>
using namespace std;
//CUBE MUL
inline int mult(int a, int b) {
    return a * b;
}

inline int cube(int n) {
    return n * n * n;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "The product of " << num1 << " and " << num2 << " is: " << mult(num1, num2) << endl;

    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "The cube of " << num << " is: " << cube(num) << endl;

    return 0;
}
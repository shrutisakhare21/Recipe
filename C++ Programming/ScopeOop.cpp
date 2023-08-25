
#include <iostream>
using namespace std;

int x = 10; // global variable

int main() {
    int x = 20; // local variable
    cout << "Local x: " << x << endl; // outputs 20

    cout << "Global x: " << ::x << endl; // outputs 10 using scope resolution operator

    return 0;
}

OUTPUT
Local x: 20
Global x: 10
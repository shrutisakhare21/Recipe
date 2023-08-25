#include <iostream>
using namespace std;

// First namespace

namespace A {
    void display() {
        cout << "Hello from namespace A" << endl;
    }
}

// Second namespace
namespace B {
    void display() {
        cout << "Hello from namespace B" << endl;
    }
}


int main() {
    A::display();  // Calling function from namespace A
    B::display();  // Calling function from namespace B

    return 0;
}

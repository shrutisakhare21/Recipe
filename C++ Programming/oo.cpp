#include <iostream>

// Class template for a generic Pair
template<typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }
};

// Function template to swap two values
template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Using the Pair class template
    Pair<int, double> myPair(10, 3.14);
    std::cout << "First value: " << myPair.getFirst() << std::endl;
    std::cout << "Second value: " << myPair.getSecond() << std::endl;
  
 // Using the swapValues function template
    int a = 5;
    int b = 10;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swapValues(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}

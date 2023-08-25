#include <iostream>

// Function template to find the maximum of two values
template <class T>
T maximum(T a, T b) {
    if(a>b){
        return a;
    }
    else{
       return b;
    }
}

int main() {
    // Testing the maximum function template with different types
    int maxInt = maximum<int>(5, 10);
    double maxDouble = maximum<double>(3.14, 2.71);
    char maxChar = maximum<char>('a', 'b');

    std::cout << "Maximum integer: " << maxInt << std::endl;
    std::cout << "Maximum double: " << maxDouble << std::endl;
    std::cout << "Maximum character: " << maxChar << std::endl;

    return 0;
}

#include<iostream>
using namespace std;

int result; // Global variable to store the sum

void sum(int a, int b) {
    result = a + b;
}

int main() {
    int a = 10;
    int b = 20;
    sum(a, b); // Call the sum function
    cout << result << endl; // Print the result
    return 0;
}

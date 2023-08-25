
#include <iostream>
using namespace std;
//MAX MIN
class Number {
private:
    int num1, num2;
public:
    void inputNumbers() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void findLargest() {
        if (num1 > num2)
            cout << num1 << " is larger." << endl;
        else
            cout << num2 << " is larger." << endl;
    }
};

int main() {
    Number n;
    n.inputNumbers();
    n.findLargest();
    return 0;
}
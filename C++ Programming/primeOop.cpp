
#include <iostream>
using namespace std;
//PRIME 
class Number {
private:
    int num;
public:
    void setNumber(int n) {
        num = n;
    }
    bool isPrime() {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Number n;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    n.setNumber(x);
    if (n.isPrime()) {
        cout << x << " is a prime number." << endl;
    } else {
        cout << x << " is a composite number." << endl;
    }
    return 0;
}
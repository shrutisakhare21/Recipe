
#include <iostream>
using namespace std;
//NEW DELETE
int main() {
    int n;
    cout << "How many numbers do you want to input? ";
    cin >> n;

    int *numbers = new int[n];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "You entered:\n";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    delete [] numbers;
    return 0;
}
OUTPUT
How many numbers do you want to input? 2
Enter 2 numbers:
1
2
You entered:
1 2 
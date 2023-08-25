#include <iostream>
using namespace std;
//ARRAY
int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // Store elements in the array
    cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // Retrieve and display the elements in the array
    cout << "The numbers you entered are: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
outputs
Enter 5 numbers: 1            
2
3
4
5
The numbers you entered are: 1 2 3 4 5 
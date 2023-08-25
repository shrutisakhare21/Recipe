#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num_rows, num_cols = 2;

    // Get number of rows from user
    cout << "Enter number of rows: ";
    cin >> num_rows;

    // Declare matrix
    int matrix[num_rows][num_cols];

    // Fill matrix with values
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            cout << "Enter value for row " << i+1 << ", column " << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }

    // Compare rows
    for (int i = 0; i < num_rows; i++) {
        for (int j = i + 1; j < num_rows; j++) {
            if (matrix[i][0] == matrix[j][0] && matrix[i][1] == matrix[j][1]) {
                cout << "Row " << i+1 << " is equal to row " << j+1 << endl;
            }
        }
    }

    // Compare columns
    for (int j = 0; j < num_cols; j++) {
        for (int k = j + 1; k < num_cols; k++) {
            bool equal = true;
            for (int i = 0; i < num_rows; i++) {
                if (matrix[i][j] != matrix[i][k]) {
                    equal = false;
                    break;
                }
            }
            if (equal) {
                cout << "Column " << j+1 << " is equal to column " << k+1 << endl;
            }
        }
    }

    return 0;
}

#include <iostream>

using namespace std;

// Function to calculate the difference between the maximum and minimum elements in a 2D array
int findDifference(int** table, int numRows, int numCols) {
    int minNum = table[0][0];
    int maxNum = table[0][0];

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (table[i][j] < minNum) {minNum = table[i][j];}
            if (table[i][j] > maxNum) {maxNum = table[i][j];}
        }
    }

    return maxNum - minNum;
}

int main() {
    int numRows, numCols;
    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numCols;

    // Dynamically allocate memory for the 2D array
    int** table = new int*[numRows];
    for (int i = 0; i < numRows; ++i) {
        table[i] = new int[numCols];
    }

    // Input values for the table
    cout << "Enter the elements of the table:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << "Element at row " << i + 1 << " column " << j + 1 << ": ";
            cin >> table[i][j];
        }
    }

    // Calculate and display the difference between the max and min elements
    int difference = findDifference(table, numRows, numCols);
    cout << "The difference between the maximum and minimum elements is: " << difference << endl;

    // Deallocate memory for the 2D array
    for (int i = 0; i < numRows; ++i) {
        delete[] table[i];
    }
    delete[] table;

    return 0;
}

/// R.Halterman Listing 11.10 twodimvector.cpp, 2019
/// Uldis Straujums added function print_matrix_iter(Matrix m) - use of iterators, 1.12.2022
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
/// typedef std::vector<std::vector<double>> Matrix;
using Matrix = vector<vector<double>>;
/// Allow the user to enter the elements of a matrix
void populate_matrix(Matrix& m) {
cout << "Enter the " << m.size() << " rows of the matrix."<<endl;
for (unsigned row = 0; row < m.size(); row++) {
    cout << "Row #" << row << " (enter " << m[row].size()
    << " values):"<<endl;
    for (double& elem : m[row])
        cin >> elem;
}
}
void print(const Matrix& m) {
for (const vector<double>& row : m) { // For each row
    for (double elem : row) // For each element in a row
      cout << std::setw(5) << elem;
    cout << endl;
}
cout << endl;
}
void print_matrix(const Matrix m) {
for (auto row : m) {  /// Starting from C++11 is available auto type inference
    for (double elem : row)
      cout << setw(5) << elem;
    cout << endl;
}
cout << endl;
}
void print_matrix_iter(Matrix m) {
     vector<vector<double>>::iterator  row;
    vector<double>::iterator col;
for (row= m.begin();row!=m.end(); row++) {  /// Before  C++11 no type inference
    for (col=row->begin();col!=row->end();col++)
      cout << setw(5) << *col;
    cout << endl;
}
cout << endl;
}
int main() {
int rows, columns;
cout << "How many rows? ";
cin >> rows;                     /// 2
cout << "How many columns? ";
cin >> columns;                  /// 3
/// Declare the 2D vector
Matrix mat(rows, vector<double>(columns));
print_matrix(mat);                   /// 0 0 0
                                     /// 0 0 0
/// Populate the vector
populate_matrix(mat);
/// Print the vector
print_matrix(mat);                   /// 1 2 3
                                     /// 4 5 6
/// Print the vector in pre C++11 style
print(mat);                          /// 1 2 3
                                     /// 4 5 6

/// Print the vector with iterators
print_matrix_iter(mat);              /// 1 2 3
                                     /// 4 5 6
}

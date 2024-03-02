/// R.Halterman Listing 11.10 twodimvector.cpp, 2019
#include <iostream>
#include <iomanip>
#include <vector>
/// typedef std::vector<std::vector<double>> Matrix;
using Matrix = std::vector<std::vector<double>>;
/// Allow the user to enter the elements of a matrix
void populate_matrix(Matrix& m) {
std::cout << "Enter the " << m.size() << " rows of the matrix.\n";
for (unsigned row = 0; row < m.size(); row++) {
    std::cout << "Row #" << row << " (enter " << m[row].size()
    << " values):\n";
    for (double& elem : m[row])
        std::cin >> elem;
}
}
void print(const Matrix& m) {
for (const std::vector<double>& row : m) { // For each row
    for (double elem : row) // For each element in a row
      std::cout << std::setw(5) << elem;
    std::cout << '\n';
}
std::cout << '\n';
}
void print_matrix(const Matrix m) {
for (auto row : m) {  /// Starting from C++11 is available auto type inference
    for (double elem : row)
      std::cout << std::setw(5) << elem;
    std::cout << '\n';
}
std::cout << '\n';
}
int main() {
int rows, columns;
std::cout << "How many rows? ";
std::cin >> rows;                     /// 2
std::cout << "How many columns? ";
std::cin >> columns;                  /// 3
/// Declare the 2D vector
Matrix mat(rows, std::vector<double>(columns));
print_matrix(mat);                   /// 0 0 0
                                     /// 0 0 0
/// Populate the vector
populate_matrix(mat);                /// 1 2 3
                                     /// 4 5 6
/// Print the vector
print_matrix(mat);
/// Print the vector in pre C++11 style
                                     /// 1 2 3
                                     /// 4 5 6
print(mat);
}

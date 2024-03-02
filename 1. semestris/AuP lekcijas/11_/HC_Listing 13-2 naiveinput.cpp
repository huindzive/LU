/// R.Halterman Listing 13.2 naiveinput.cpp, 2019
#include <iostream>
int main() {
int x;
// I hope the user does the right thing!
std::cout << "Please enter an integer: ";
std::cin >> x;
std::cout << "You entered " << x << '\n';
}

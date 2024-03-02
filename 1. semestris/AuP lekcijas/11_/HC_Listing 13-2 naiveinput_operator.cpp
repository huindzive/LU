/// R.Halterman Listing 13.2 naiveinput_operator.cpp, 2019
#include <iostream>
int main() {
int x;

std::cout << "Please enter an integer: ";
std::cin.operator>>(x);

std::cout << "You entered " << x << '\n';
std::cin >> x;
std::cout << "You entered " << x << '\n';
}

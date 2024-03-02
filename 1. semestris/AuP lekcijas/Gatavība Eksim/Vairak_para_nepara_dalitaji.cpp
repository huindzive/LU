#include <iostream>

int countFactors(int n) {
    int oddFactors = 0;
    int evenFactors = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                evenFactors++;
            } else {
                oddFactors++;
            }
        }
    }
    return (oddFactors > evenFactors);
}
int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }
    int result = countFactors(n);
    if (result) {
        std::cout << "Result: 1 (odd factors are more than even factors)" << std::endl;
    } else {
        std::cout << "Result: 0 (even factors are more than or equal to odd factors)" << std::endl;
    }
    return 0;
}
#include <iostream>
#include <set>
#include <cmath>

int countPrimeFactors(int n) {
    std::set<int> primeFactors;

    while (n % 2 == 0) {
        primeFactors.insert(2);
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            primeFactors.insert(i);
            n /= i;
        }
    }
    if (n > 1) {
        primeFactors.insert(n);
    }

    return primeFactors.size();
}

int main() {
    std::cout << countPrimeFactors(6) << std::endl;    // Output: 2
    std::cout << countPrimeFactors(12) << std::endl;   // Output: 2
    std::cout << countPrimeFactors(51) << std::endl;  // Output: 1

    return 0;
}

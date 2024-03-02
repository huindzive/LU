#include <iostream>
/*
Izveido cpp programmu. Dots vesels pozitīvs skaitlis n. Noskaidrot, 
vai skaitlis ir salikts skaitlis (t.i., nav pirmskaitlis), kas nedalās ne ar 2, ne ar 3. 
Piemērs #1. n=9, rezultāts 0 (dalās ar 3). Piemērs #2. n=7, rezultāts 0 (ir pirmskaitlis). 
Piemērs #3. n=25, rezultāts 1 (nedalās ne ar 2, ne ar 3, bet nav pirmskaitlis).
*/
bool isCompositeNotDivisibleBy2Or3(int n) {
    if (n <= 3) {
        return false; // 2 and 3 are prime numbers
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return false; // Divisible by 2 or 3, not composite
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return true; // Divisible by a number other than 2 or 3, composite
        }
    }

    return false; // Not divisible by any other prime factors, not composite
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    if (isCompositeNotDivisibleBy2Or3(n)) {
        std::cout << "Result: 1 (Composite and not divisible by 2 or 3)" << std::endl;
    } else {
        std::cout << "Result: 0 (Not composite or divisible by 2 or 3)" << std::endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

bool can_be_product_of_2_and_3(int n) {
    if (n < 2) {return false;}

    int a = 0;
    int b = 0;

    while (n % 2 == 0) {
        a++;
        n /= 2;
    }

    while (n % 3 == 0) {
        b++;
        n /= 3;
    }

    return (n == 1) && (a >= 1) && (b >= 1);
}

int main() {
    cout << can_be_product_of_2_and_3(9) <<endl;    // Output: 0 (false)
    cout << can_be_product_of_2_and_3(120) <<endl;  // Output: 0 (false)
    cout << can_be_product_of_2_and_3(12) <<endl;   // Output: 1 (true)
    cout << can_be_product_of_2_and_3(405) <<endl;  // Output: 0 (false)

    return 0;
}
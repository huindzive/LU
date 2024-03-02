#include<iostream>
using namespace std;

int main(){

    for (int i = 0; i < 5; i++) {
    if (i == 2) {
        continue; // Izlaiz iterāciju, kad i ir 2.
    }
    cout << i << endl;
}
return 0;
}
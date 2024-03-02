#include<iostream>
using namespace std;

void delete150(char* mas) {
    if (strlen(mas) < 3) return;
    for (int i = 0;mas[i + 2] != '\0';i++)
        if (mas[i] == '1' && mas[i + 1] == '5' && mas[i + 2] == '0')
            for (int j = i--;mas[j + 2] != '\0';j++)
                mas[j] = mas[j + 3];

}

int main() {

    char* mas;
    mas = new char[180] { 'f', 'd', 'f', '1', '5', '0', 'f', 'd', 'w', 'a', 'f', 'f', 'e', 'a', 'w' };

    delete150(mas);

    for (int i = 0; mas[i] != '\0'; ++i) {
        std::cout << mas[i];
    }

    return 0;
}

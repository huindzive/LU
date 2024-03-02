/*
 Artūrs Balnass, ab23183
 D19 Izveidot klasi "Laiks" - Time, kurā tiek glabāti trīs skaitļi - stunda, minūte, sekunde.
 Klasei izveidot šādas metodes:
    (1) konstruktors, ar kuru tiek padotas sākotnējās vērtības,
    (2) destruktors, kurš paziņo par objekta likvidēšanu,
    (3) metode "Mainīt" - change ar trīs parametriem, kas uzstāda jaunās vērtības,
    (4) metode "Drukāt" - print, kas izdrukā laiku,
    (5) metode "Distance" - distance ar trīs parametriem - citu laika momentu,
        kas aprēķina un izdrukā attālumu starp abiem laika momentiem gan sekundēs, gan minūtēs,
        gan apvienoti (stundās, minūtēs un sekundēs).

 Programma izvedota: 13.12.2023
*/
#include <iostream>
#include "time.h"
using namespace std;
/*
    bool isValidTime(int h, int m, int s)
    Funkcija isValidTime(h,m,s)
    atgriež kā rezultātu true, ja stundas h, minūtes m un sekundes s atblist laika standartiem., atgriež false pretējā gadījumā.
*/
bool isValidTime(int h, int m, int s) {
    return (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60);
}

/*
    void readTime(int& h, int& m, int& s)
    funkcija readTime(h,m,s)
    ievaddatu h,m,s validācija, pie neparieziem datiem notiek atkārtota ievade.
*/
void readTime(int& h, int& m, int& s) {
    while (true) {
        cout << "Ievadiet laiku (stundas minūtes sekundes): ";
        cin >> h >> m >> s;
        if (isValidTime(h, m, s)) {
            break;
        }
        else {
            cout << "Nepareizi ievadīti dati. Lūdzu, mēģiniet vēlreiz." << endl;
        }
    }
}

int main() {
    int ok;
    do
    {
        int h1, m1, s1, h2, m2, s2;

        readTime(h1, m1, s1);
        readTime(h2, m2, s2);

        Time laiks1(h1, m1, s1);
        Time laiks2(h2, m2, s2);

        cout << "Pirmais laiks: ";
        laiks1.print();
        cout << "Otrais laiks: ";
        laiks2.print();

        cout << "Attālums starp laikiem: ";
        laiks1.distance(laiks2);
        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;
    } while (ok == 1);
    return 0;
}
/*******************************************
Artūrs Balnass, ab23183
A22. Doti veseli skaitļi  m un n. Izdrukāt tos skaitļus, kuri atrodas intervālā [n,m] un ir veselu skaitļu kubi.
Programma izveidota 11.10.2023
********************************************/
#include <iostream>
using namespace std;

int main() {
int ok;
do
{
    int n, m;
    do // tiek ievadītas vērtības un tiek pārbaudīts vai intervāls ir izmantojams priekš programmas
    {
        cout << "Ievadiet intervāla sākuma vērtību n: ";
        cin >> n;
        cout << "Ievadiet intervāla beigu vērtību m: ";
        cin >> m;
        if (n>=m)
            cout << "!!!! Nekorekts intervāls, jāievada vērtības, kur n < m !!!!" << endl;
    } while (n>=m);

    cout << "Veseli skaitļi no [" << n << ", " << m << "], kuri ir veselu skaitļu kubi:" << endl; // tiek parādīts izmantotais intervāls
    
    for (int i = n; i <= m; i++) { // tiek izveidots cikls, kurš ir intervāla ietvaros pārbauda vai kādam no to skaitļiem ir kāda kubsaknes vērtība
        int kubsakne = 1;

        if (i < 0) {
            while (kubsakne * kubsakne * kubsakne > i) {
                kubsakne--;
            }
        } else if (i > 0) {
            while (kubsakne * kubsakne * kubsakne < i) {
                kubsakne++;
            }
        }

        if (kubsakne * kubsakne * kubsakne == i) {
            cout <<"Kubsaknes vērtība: " << kubsakne << " ; Intervāla vērtība: "<< i << endl;
        }
    }
    
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
} while (ok == 1);
}

/*************** Testu plāns **************
 * ievade       paredzētais iznākums
 * 1,125        1,1  2,8  3,27  4,64  5,125
 * -149,49      -5,-125  -4,-64  -3,-27  -2,-8, -1,-1  1,1  2,8  3,27

 ******************************************/
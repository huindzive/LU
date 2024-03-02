/// AuPLa0301.cpp
/****************************************************************************
Uldis Straujums, us22011
AuPLa0301. Sastādīt C++ programmu, kas pieprasa ievadīt N veselus skaitļus un
nosaka lielākā skaitļa vērtību.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 16.09.2022
Mainīta: 22.09.2022 Pievienoti komentāri par ieejas datu korektības nodrošināšanu
*****************************************************************************/
#include<iostream>
using namespace std;
int main()
{
cout << "Pieprasa ievadīt N veselus skaitļus un nosaka lielākā skaitļa vērtību" << endl;
int ok;
do
{
int N;
int sk;
int liel;
/// Nodrošina ieejas datu korektumu
///  skaitļu skaits N: N>=1
do
{
cout << "Ievadiet skaitļu skaitu N, N>=1: " << endl;
cin >> N;
if(N<1)
    cout << "Nekorekta vērtība, jāievada skaitļu skaits N, N>=1" << endl;
}while(N<1);

/// Izmanto korektu skaitļu skaitu N: N>=1
cout << "Ievadiet  veselu skaitli: " << endl;
cin >> liel;  // Pieņem, ka pirmais skaitlis ir lielākais
for (int i = 0; i < N-1; ++i)
   {
    cout << "Ievadiet veselu skaitli: " << endl;
    cin >> sk;
    if (sk > liel) liel = sk;
   }
cout << "Lielākā skaitļa vērtība: " << liel << endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
} while (ok == 1);
}
/******************* Testu plāns ****************************
    N      skaitļi                paredzamais rezultāts
    3      -2 17 4                     17
    1      21                          21
    2     -19 -21                     -19
    2      23 23                       23
    0                                  jāievada N>=1
************************************************************/

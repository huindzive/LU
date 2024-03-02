/// AuPLa0401.cpp
/****************************************************************************
Uldis Straujums, us22011
AuPLa0401. Sastādīt C++ programmu, kas pieprasa ievadīt N veselus skaitļus un
nosaka garākās stingri augošas virknes garumu.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 26.09.2022
*****************************************************************************/
#include<iostream>
using namespace std;
int main()
{
cout << "Pieprasa ievadīt N veselus skaitļus un " << endl;
cout << "nosaka garākās stingri augošas virknes garumu" << endl;
int ok;
do
{
int N;
int sk;   // kārtējais ievadītais skaitlis
int iepr; // iepriekšējais ievadītais skaitlis
int kgar; // kandidāts garākās stingri augošas virknes garumam
int gar;  // pašlaik garākās stingri augošas virknes garums

// Nodrošina ieejas datu korektumu
//  skaitļu skaits N: N>=1
do
{
cout << "Ievadiet skaitļu skaitu N, N>=1: " << endl;
cin >> N;
if(N<1)
    cout << "Nekorekta vērtība, jāievada skaitļu skaits N, N>=1" << endl;
}while(N<1);

// Izmanto korektu skaitļu skaitu N: N>=1
cout << "Ievadiet  veselu skaitli: " << endl;
cin >> iepr;  // Pašlaik virknes ievadītais vienīgais elements -
              // ievadīts pirms cikla, lai būtu ar ko salīdzināt ciklā pirmo ievadīto elementu
gar = kgar = 1; // Vienīgais elements veido stingri augošu virkni ar garumu 1
for (int i = 0; i < N-1; i++)
   {
    cout << "Ievadiet veselu skaitli: " << endl;
    cin >> sk;
    if (sk > iepr) kgar++;
    else if (kgar>gar) {gar=kgar; kgar=1;}
    iepr = sk;
   }
   if (kgar > gar) gar = kgar;
cout << "Garākās stingri augošas virknes garums: " << gar << endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
} while (ok == 1);
}
/******************* Testu plāns ****************************
     N      skaitļi                         paredzamais rezultāts
    11      -1 2 3 4 -1 2 7 11 13 19 4              6
    10      -1 2 3 4 -1 2 7 11 13 19                6
     1      21                                      1
     2     -19 -19                                  1
     5      1 2 3 4 17                              5
     0                                  jāievada N>=1
************************************************************/

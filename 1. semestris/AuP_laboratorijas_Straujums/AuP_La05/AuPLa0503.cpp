/// AuPLa0503.cpp
/****************************************************************************
Uldis Straujums, us22011
AuPLa0503. Sastādīt C++ programmu, kas pieprasa ievadīt N veselus skaitļus un
nosaka lielākā skaitļa vērtību.
Risinājumā jāizmanto funkcija lielakais(a, b),
kas atgriež kā rezultātu lielāko no dotajiem veselajiem skaitļiem a un b.
Funkcijas lielākais(a, b) realizācijā jāizmanto
nosacījuma funktors (conditional operator).
Programma izveidota: 06.10.2020
*****************************************************************************/
#include<iostream>
using namespace std;
/********************************************************************
int lielakais(int a, int b);
Funkcija  lielakais(a, b) -
 atgriež kā rezultātu lielāko no dotajiem veselajiem skaitļiem a un b.
*********************************************************************/
int lielakais(int a, int b)
{
 return a >= b ? a : b;
}
int main()
{
int N;
int sk;   /// Kārtējais ievadītais skaitlis
int liel; /// Pašlaik lielākais atrastais skaitlis
int ok;
do
{
cout << "Pieprasa ievadīt N veselus skaitļus un nosaka lielākā skaitļa vērtību" << endl;
do
{
cout << "Ievadiet skaitļu skaitu N, N>=1: "<< endl;
cin >> N;
if(N<1) cout <<"Kļūdaina vērtība. Jāievada N, N>=1" << endl;
}while(N<1);

cout << "Ievadiet veselu skaitli: " << endl;
    cin >> liel;                    /// Nodrošina, ka liel ir pašlaik lielākais atrastais
for (int i = 0; i < N-1; i++)
   {
    cout << "Ievadiet veselu skaitli: " << endl;
    cin >> sk;
    liel = lielakais(liel, sk);    /// Panāk, ka mainīgais liel joprojām ir lielākais
   }
cout << "Lielākais skaitlis ir " << liel << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
} while (ok == 1);
}
/******************* Testu plāns ****************************
    N      skaitļi                lielākais
    3      -2 17 4                     17
    1       21                         21
    2      19 19                       19
    2     -11 -9                       -9
    0                                  kļūdaina vērtība
************************************************************/

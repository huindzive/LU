/// AuPLe0402_ar automātisku robežu.cpp
/******************************************************************
AuPLa0301. Sastādīt C++ programmu, kas dotam naturālam skaitlim N
aprēķina faktoriāla funkcijas vērtību.
Naturāla skaitļa N>=1 faktoriālu definē šādi:
N! = 1 * 2 * 3 * (N-1) * N
Ir pieņemts, ka tukšais reizinājums jeb reizinājums,
kurā neietilpst neviens skaitlis, ir vienāds ar 1, tāpēc
0! = 1.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
********************************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 13.09.2018
#include<iostream>
#include <climits>
using namespace std;
/***********************************************
Funkcija int factlim(unsigned long long max) -
 nosaka lielāko skaitli dotajā datorā,
 kam var izrēķināt faktoriāla vērtību,
 ja rezultāta mainīgā maksimālā vērtība
 šajā datorā ir max.
 Atgriež lielāko skaitli kā rezultātu.
***********************************************/
// Autors: Valdis Ādamsons
// Izveidota: 28.09.2011.
int factlim(unsigned long long max){
    int res;
    for (res=1;max>0;res++){
    max/=res;
    //cerr<<max<< " res: " << res << endl;
    }
    return res-2;
}
int main()
{
int N;
int limit; // Lielākais skaitlis šajā datorā, kam var izrēķināt faktoriāla vērtību
unsigned long long int fakt;

//cout << "Lielākais veselais skaitlis šajā datorā: "<< ULLONG_MAX << endl;
int ok;
do
{
cout << "Dotam naturālam skaitlim N aprēķina faktoriāla funkcijas vērtību" << endl;
limit = factlim(ULLONG_MAX);
//limit = factlim(INT_MAX);
do
{
cout << "Ievadiet naturālu skaitli N, 0<=N<=" << limit<< endl;
cin >> N;
if ((N<0) || (N>limit))
    cout << "Kļūda. Ievadiet naturālu skaitli N, 0<=N<=" << limit<< endl;
}while((N<0) || (N>limit));
fakt = 1;
for (int i = 0; i < N; i++)
   {
    fakt *= (1+i);
   }
/**************************************************************
Optimizēta cikla ķermeņa izpilde - nav saskaitīšanas darbības
for (int i = 1; i <= N; i++)
   {
    fakt *= i;
   }
**************************************************************/
cout << "Faktoriāla vērtība ir " << fakt << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
} while (ok == 1);
}
/******************* Testu plāns ****************************
    N                        N!
     6                      720
    17          355687428096000 no www.wolframalpha.com
    20      2432902008176640000 no www.wolframalpha.com
     1                        1
     0                        1
    -1      nav definēts faktoriāls
    21      nevar aprēķināt, jo vērtība pārsniedz ULLONG_MAX
************************************************************/

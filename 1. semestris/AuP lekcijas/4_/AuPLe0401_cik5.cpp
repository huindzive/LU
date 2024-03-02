/// AuPLe0401_cik5.cpp
/********************************************************************************************
AuPLe0401_cik5. Sastādīt C++ programmu, kas dotam naturālam skaitlim nosaka,
cik skaitļa pierakstā ir ciparu 5.
Risinājuma iegūšanai sastādīt funkciju,
kura naturālam skaitlim nosaka cipara 5 skaitu.
*********************************************************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 27.09.2021.
#include <iostream>
using namespace std;

/***************************************************
Funkcija int cik5(int n) -
 naturālam skaitlim n nosaka, cik skaitļa pierakstā ir ciparu 5 un
 atgriež to kā rezultātu.
 Ja n<0, tad n aizvieto ar pretējo skaitli.
***************************************************/
int cik5(int n)
{
int skaits5 = 0; /// Cipara 5 skaits

if(n<0) n=-n;    /// Panāk, ka n ir naturāls
do
{
if (n%10==5) skaits5++;
n/=10;  // Atmet no n pēdējo ciparu
}while(n>0);
return skaits5;
}

int main()
{
int n;
int rez;
int ok;

cout << "Dotam naturālam skaitlim nosaka, cik skaitļa pierakstā ir ciparu 5 " << endl;
cout << endl;
do
{
do
{
cout << "Ievadiet naturālu skaitli, skaitlis >=0: ";
cin >> n;
if(n < 0) cout << "Kļūda. Jāievada naturāls skaitlis, skaitlis>=0 " << endl;
}while(n < 0);

rez = cik5(n);
cout << "Naturāla skaitļa " << n << " pierakstā ir " <<
        rez << " cipari 5 " <<endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
}while (ok == 1);
}

/**************** Testu plāns ***************
   n        paredzamais rezultāts
 1525         2
   51         1
    3         0
  -35       jāievada skaitlis>=0
********************************************/

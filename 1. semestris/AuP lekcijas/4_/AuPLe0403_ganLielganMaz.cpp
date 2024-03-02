/// AuPLe0403_ganLielganMaz.cpp
/********************************************************************************************
AuPLe0403_ganLielganMaz. Izveidot C++ programmu,
kas pieprasa ievadīt N veselus skaitļu un
nosaka gan lielāko skaitli gan mazāko skaitli.
Risinājuma iegūšanai sastādīt funkciju,
kura pieprasa ievadīt N veselus skaitļus un
atgriež gan lielāko skaitli gan mazāko skaitli.
*********************************************************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 27.09.2021.
#include <iostream>
using namespace std;

/***************************************************
Funkcija void nLielMaz(int n, int &liel, int &maz) -
 pieprasa ievadīt n veselus skaitļus un
 atgriež gan lielāko skaitli liel gan mazāko skaitli maz.
***************************************************/
void nLielMaz(int n, int &liel, int &maz)
{
int sk;
cout <<"Ievadiet veselu skaitli: " << endl;
cin >> sk;
liel=maz=sk;
for(int i=0;i<n-1;i++)
{
cout <<"Ievadiet veselu skaitli: " << endl;
cin >> sk;
if (sk>liel) liel=sk;
else if (sk<maz) maz=sk;
}
return;
}

int main()
{
int N;
int lielakais;
int mazakais;
int ok;

cout << "Dotiem N veseliem skaitļiem nosaka gan lielāko skaitli gan mazāko skaitli" << endl;
cout << endl;

do
{
do
{
 cout <<"Ievadiet skaitļu skaitu N, N>=1: "<< endl;
 cin >>N;
 if(N<1) cout << "Kļūda. ievadiet N, N>=1" << endl;
}while(N<1);


nLielMaz(N, lielakais, mazakais);
cout << "Lielākais skaitlis ir " << lielakais
     << ", mazākais skaitlis ir " << mazakais << endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
}while (ok == 1);
}

/**************** Testu plāns ***************
   N    skaitļi   paredzamais rezultāts
   3     2 1 3      3 1
   2    -9 -11     -9 -11
   1    17         17 17
   0              jāievada >=1
  -1              jāievada >=1
********************************************/

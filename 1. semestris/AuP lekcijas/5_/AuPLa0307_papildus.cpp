/// AuPLa0307_papildus.cpp
/******************************
AuPLa0307_papildus. Dots naturāls skaitlis n.
Izdrukāt laukumu n × n no simboliem, kas atbilst šādam rakstam (pie n=4):

*
**
***
****
**********************************/
/// Autors: Uldis Straujums
/// Izveidots: 22.09.2020

#include <iostream>
using namespace std;

int main()
{
   int n; /// Laukuma izmērs
   int ok;/// Lietotāja atbilde: 1 - turpināt, 0 - beigt

do
{
/// Saņem izmēru
cout << "Ievadiet laukuma izmēru: " << endl;
cin >> n;


/// Paziņo rezultātu
for (int i=0;i<n;i++) /// drukā n rindiņas
{
    for (int k=0;k<i+1; k++) /// drukā vienu rindiņu
    {
     cout << '*';
    }
    cout << endl;
   }

cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
}while (ok == 1);

return 0;
}
/************* Testu plāns ***********************
  n          paredzamais rezultāts
  4         zīmējums no uzdevuma formulējuma
  2          *
             **
*************************************************/

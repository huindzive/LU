// AupLa0501.cpp
/*********************************************************************
Uldis Straujums, us22011
AuPLa0501. Sastādīt C++ programmu, kas dotam naturālam skaitlim nosaka
dota cipara skaitu pierakstā.
Risinājuma iegūšanai sastādīt funkciju,
kura naturālam skaitlim nosaka dota cipara skaitu pierakstā.
Programma izveidota: 26.09.2018
Mainīts: 28.09.2021 Programmas kodējums nomainīts uz UTF-8
**********************************************************************/
#include <iostream>
using namespace std;

/*******************************************************************
int cikDotaCipara(int n, int cip);
Funkcija cikDotaCipara(n, cip) -
 atgriež kā rezultātu dota cipara cip skaitu skaitļa n pierakstā.
********************************************************************/
int cikDotaCipara(int n, int cip)
{
int dcsk = 0;

if(n<0) n=-n;    // Panāk, ka n ir naturāls
do
   {
    if (n%10==cip) dcsk++;
    n/=10;
   }while(n>0);
return dcsk;
}

int main()
{
int n;
int cip;
int rez;
int ok;

cout << "Dotam naturālam skaitlim nosaka dota cipara skaitu "<< endl;
cout << endl;
do
{
do
{
cout << "Ievadiet naturālu skaitli n, n>=1: "<< endl;
cin >> n;
if(n<1) cout <<"Kļūdaina vērtība. Jāievada n, n>=1" << endl;
}while(n<1);
do
{
cout << "Ievadiet ciparu, 0<=cipars<=9: ";
cin >> cip;
if(cip<0 or cip>9)cout << "Kļūdaina vērtība. Jāievada 0<=cipars<=9" << endl;
}while(cip<0 or cip>9);

rez = cikDotaCipara(n, cip);
cout << "Naturālā skaitļa " << n << " cipara " << cip <<
        " skaits ir " << rez << endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
}while (ok == 1);
}
/**************** Testu plāns ***************
        n  cipars     paredzamais rezultāts
       17   1              1
        4   4              1
      377  17              jāievada cipars 0..9
      377   7              2
      123   9              0
     2444  -4              jāievada cipars 0..9
     2444   4              3
    -2440                  jāievada n>=1
     2440   4              2
********************************************/

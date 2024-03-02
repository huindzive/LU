/// AuPLa0403.cpp
/**************************************************************
Uldis Straujums, us22011
AuPLa0403. Sastādīt C++ programmu, kas dotam naturālam skaitlim
nosaka lielāko ciparu pierakstā.
Risinājuma iegūšanai sastādīt funkciju,
kura naturālam skaitlim nosaka lielāko ciparu pierakstā.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 28.09.2021
***************************************************************/
#include <iostream>
using namespace std;
/********************************************************
int lielCipars(int n);
Funkcija lielCipars(n) -
 veselam skaitlim n nosaka lielāko ciparu pierakstā.
 Atgriež kā rezultātu lielāko ciparu skaitļa n pierakstā.
*********************************************************/
int lielCipars(int n)
{
int lcip = 0; /// Lielākais cipars
int pedc;      /// Kārtējais pēdējais cipars

if(n<=0) n=-n;    /// Panāk, ka n ir naturāls
do
{
pedc = n%10;
if (pedc>lcip) lcip=pedc;
n/=10;           /// Atmet no n pēdējo ciparu
}while(n>0);
return lcip;
}

int main()
{
int ok;

cout << "Dotam naturālam skaitlim nosaka lielāko ciparu "<< endl;
cout << endl;
do
{
int n;
int rez;
do
{
cout << "Ievadiet naturālu skaitli N, N>=1: "<< endl;
cin >> n;
if(n<1) cout <<"Kļūdaina vērtība. Jāievada N, N>=1" << endl;
}while(n<1);

rez = lielCipars(n);
cout << "Naturālā skaitļa " << n << " lielākais cipars ir "
     <<  rez << endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
}while (ok == 1);
}

/**************** Testu plāns ***************
      N    paredzamais rezultāts
 12345687     8
        3     3
       17     7
        0     Jāievada vesels skaitlis >0
       -7     Jāievada vesels skaitlis >0
        7     7
********************************************/

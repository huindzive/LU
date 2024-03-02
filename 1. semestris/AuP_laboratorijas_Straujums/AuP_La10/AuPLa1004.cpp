/// AuPLa1004.cpp
/***********************************************************************
Uldis Straujums, us22011
AuPLa1004. Izveidot C++ funkciju cipliel5(n),
kas aprēķina naturāla skaitļa n to ciparu summu, kuri ir lielāki par 5.
Funkciju cipliel5(n) realizēt rekursīvi.
Izveidot C++ programmu, kas izsauc funkciju cipliel5.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 7.11.2022.
************************************************************************
#include <iostream>
using namespace std;
/*********************************************
int cipliel5(int n);
Funkcija cipliel5(n)
 atgriež kā rezultātu naturāla skaitļa n
 to ciparu summu, kuri ir lielāki par 5.
*********************************************/
int cipliel5( int n)
{
   if (n<=5) return 0;
   if (n%10<=5) return    0 + cipliel5(n/10);
   else         return n%10 + cipliel5(n/10);
}
/**
Varēja arī tā:
int cipliel5( int n)
{
   if (n<=5) return 0;
   return (n%10)>5?n%10 + cipliel5(n/10):0 + cipliel5(n/10);
}
**/

int main()
{
   int n;
   int ok; /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do /// paredz atkārtotu programmas izpildi
{
     cout << "Aprēķina naturāla skaitļa n to ciparu summu,"
          << "kuri ir lielāki par 5" << endl<<endl;
     /// Saņem ieejas datus
     do
     {
     cout<< "Ievadiet naturālu skaitli n, n>=1"<< endl;
     cin >> n;
     if (n<1) cout << "Kļūdaina vērtība. Jāievada n, n>=1. "<< endl;
     }while(n<1);


     /// Apstrādā skaitli n un paziņo rezultātu
     cout << endl;
     cout<< "Skaitļa " << n << " to ciparu summa, kuri ir lielāki par 5, ir "
         << cipliel5(n) << endl;


     cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
}while(ok == 1);

   return 0;
}

/************ Testu plāns ****
n       paredzamais rezultāts
6       6
166     12
55      0
0      Kļūda, vajag n>=1
1       0
*****************************/

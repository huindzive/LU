/// AuPLa1002.cpp
/**************************
Uldis Straujums, us22011
AuPLa1002. Izveidot C++ funkciju
lielrindassumma(tab, r, k), kas noskaidro,
kurā rindā dinamiski veidotā veselu skaitļu tabulā tab ar r rindām un k kolonnām ir
lielākā elementu summa un atgriež rindas numuru kā rezultātu.
Rindas numurē no 1.
Izveidot C++ programmu, kas izsauc funkciju lielrindassumma(tab, r, k).
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 7.11.2017.
**********************/
#include <iostream>
#include<climits>
using namespace std;
/**************************************************************
int lielrindassumma(int** const tab, int r, int k);
Funkcija lielrindassumma(tab, r, k)
atgriež kā rezultātu tās rindas numuru, kurā dinamiski veidotā
veselu skaitļu tabulā tab
ar r rindām un k kolonnām ir lielākā elementu summa.
Rindas numurē no 1.
**************************************************************/
int lielrindassumma(int** const tab, int r, int k)
{int sum;
 int maxsum = INT_MIN; /// Jebkura rindas summa būs ne mazāka par šo
 int liel   = 0;         /// Pieņem, ka lielākā summa ir 1.rindā (0.rinda ir 1.)

    for (int i=0;i<r;i++)
      {sum=0;
       for (int j=0;j<k;j++) sum+=tab[i][j];
       if(sum>maxsum) {maxsum = sum;liel=i;}
      }
   return liel+1;
}

int main()
{
   int** tab;     /// apstrādājamās veselu skaitļu tabulas mainīgais(norāde)
   int r;         /// apstrādājamo rindu skaits
   int k;         /// apstrādājamo kolonnu skaits
   int lielrin;   ///  rezultāts - rindas ar lielāko elementu summu numurs
   int ok;        /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do
    {

     cout << "Noskaidro, kurā rindā dinamiski veidotā veselu skaitļu tabulā tab "
          << "ar r rindām un k kolonnām "
          <<"ir lielākā elementu summa" << endl;
     /// Saņem ieejas datus dinamiski veidotai veselu skaitļu tabulai tab
     do
     {
     cout<< "Ievadiet rindu skaitu dinamiskai veselu skaitļu tabulai, r>=1:"<< endl;
     cin >> r;
     if (r<1) cout << "Kļūdaina vērtība. Rindu skaitam jābūt vismaz 1" << endl;
     }while(r<1);
     do
     {
     cout<< "Ievadiet kolonnu skaitu dinamiskai veselu skaitļu tabulai, k>=1:"<< endl;
     cin >> k;
     if (k<1) cout << "Kļūdaina vērtība. Kolonnu skaitam jābūt vismaz 1" << endl;
     }while(k<1);

     /// Izveido dinamisku tabulu tab
     tab = new int*[r];
     for (int i=0;i<r;i++)
        tab[i] = new int[k];

     for (int i=0; i < r; i++)
      for (int j=0;j<k;j++)
       {
        cout << "Ievadiet " << i+1 << ".rindas, " <<
                j+1 << ".kolonnas elementu:" << endl;
        cin >> tab[i][j];
       }


     /// Apstrādā tab vērtības un paziņo rezultātu
     cout << endl;
     lielrin = lielrindassumma(tab, r, k);
     cout<< "Lielākā elementu summa ir " << lielrin <<
            ".rindā" << endl;

     /// Atbrīvo dinamiskās tabulas tab atmiņu
     for (int i=0;i<r;i++)
        delete []tab[i];
     delete []tab;

     cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
}while(ok == 1);

   return 0;
}
/************************* Testu plāns **********************************
r  k    elementi     paredzamais rezultāts
2  3    1 -3 -3         2
        4  5  6
1  1    7               1
1  1    -2147483648     1
-1                     jāievada >=1
1  0                   jāievada >=1
***************************************************************************/

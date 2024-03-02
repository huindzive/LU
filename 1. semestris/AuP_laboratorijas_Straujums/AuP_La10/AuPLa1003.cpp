/// AuPLa003.cpp
/*******************************************************************
AuPLa1003. Dots naturālu skaitļu intervāls [m,n].
Izdrukāt visus tos skaitļus, kuri pieder šim intervālam un kurus
var izteikt kā naturāla skaitļa kvadrātu.
Risinājumam izveidot C++ funkciju, kas pazīst vesela skaitļa kvadrātu.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
*******************************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 3.11.2020.
/// Mainīta: 3.11.2021. Uzlaboti funkcijas komentāri
#include <iostream>
#include<cmath>
using namespace std;
/********************************************************************************
bool vaiKvadrats(int s);
Funkcija vaiKvadrats(s)
 atgriež kā rezultātu vērtību true, ja skaitlis s ir kāda vesela skaitļa kvadrāts,
 atgriež false, ja skaitlis s nav neviena vesela skaitļa kvadrāts.
*********************************************************************************/
bool vaiKvadrats(int s)
{
 return (int)sqrt(s)==sqrt(s);
}
int main()
{
   int ok;      /// lietotāja atbilde: 1 - turpināt, 0 - beigt
    do /// paredz atkārtotu programmas izpildi
    {
     int n, m;    /// Intervāla robežas
     bool atrasts; /// false, ja nav meklēto skaitļu
     cout << "Izdrukāt visus tos skaitļus, kuri pieder intervālam [m,n] " << endl;
     cout << "un kurus var izteikt kā naturāla skaitļa kvadrātu"<< endl<<endl;
     do
     {
      cout << "Ievadiet intervāla sākumu m, m>=1: " << endl;
      cin >> m;
      if (m<1) cout << "Kļūdaina vērtība. Jāievada m, m>=1" << endl;
     }while(m<1);

     do
     {
      cout << "Ievadiet intervāla beigas n, n>="<<m<<": " << endl;
      cin >> n;
      if (n < m) cout << "Kļūdaina vērtība. Jāievada n, n>="<<m<<'.'<< endl;
     }while(n < m);
     cout << endl;

     atrasts = false;
     for (int i=m; i<=n; i++)
     {
     if(vaiKvadrats(i))
        if (!atrasts)
            {atrasts = true;
             cout << "Skaitļi, kurus var izteikt kā naturāla skaitļa kvadrātu: " << endl;
             cout << i << endl;
            }
        else cout << i << endl;
     }
     if (!atrasts)
        cout << "Intervālā nav meklēto skaitļu" << endl;

     cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
}while(ok == 1);
   return 0;
}

/************************* Testu plāns **********************************
m    n      paredzamais rezultāts
1    10        1 4 9
11   15        nav skaitļu
4    3         jāievada n>=m
4    4         4
5    5         nav skaitļu
-1             kļūda
1    100       1 4 9 16 25 36 49 64 81 100
***************************************************************************/

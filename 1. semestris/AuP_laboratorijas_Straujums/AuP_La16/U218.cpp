/// U218.cpp
/*************************************************************************
U218. Sastādīt C++ funkciju, kas atrod lielāko no diviem skaitļiem.
Parādīt, kā šo funkciju lietot, lai atrastu lielāko no četriem skaitļiem.
**************************************************************************/
/// Autors: Uldis Straujums
/// Izveidots: 19.12.2023.
/// Precizējums: noskaidro lielāko skaitli no n veseliem skaitļiem
#include <iostream>
using namespace std;
int liel2(int a, int b)
{
 return (a>b)?a:b;
}
int main()
{
int ok;     /// lietotāja atbilde: 1 - turpināt, 0 - beigt

do          /// paredz atkārtotu programmas izpildi
{
   int n;
   int* mas;
   cout << "Atrod lielāko no n veseliem skaitļiem " <<endl;

   do
   {
    cout << "Ievadiet skaitļu skaitu n, n>=1:" <<endl;
    cin >> n;
    if(n<1) cout <<"Kļūdaina vērtība. Jāievada n, n>=1" << endl;
   }while(n<1);

   mas = new int[n];

   for(int i=0;i<n;i++)
   {
      cout << "Ievadiet veselu skaitli: " << endl;
      cin >> mas[i];
   }
   int liel=mas[0];
   for(int i=1;i<n;i++)
   {
       liel = liel2(liel, mas[i]);
   }

     cout << "Lielākais no skaitļiem: " << liel <<endl;

   delete[] mas;
   cout << endl;
   cout << " Vai turpināt (1) vai beigt (0)?" << endl;
   cin >> ok;
}while(ok == 1);
return 0;
}
/*********** Testu plāns *********************
   n   skaitļi         paredzamais rezultāts
   3    1 17 2             17
   4    -2 -4 -16 -3       -2
   2    1 1                 1
   1 7                      7
   0                   Kļūdaina vērtība
*********************************************/

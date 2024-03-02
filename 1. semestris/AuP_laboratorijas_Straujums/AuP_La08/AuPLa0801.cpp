/// AuPLa0801.cpp
/**************************************************************************************
Uldis Straujums, us22011
AuPLa0801. Sastādīt C++ programmu, kas ļauj noskaidrot,
vai doto naturālu skaitli n var izteikt kā divu naturālu skaitļu kvadrātu summu.
Izdrukāt visus šādus naturālu skaitļu pārus.
Risinājumam izveidot funkciju, kas aprēķina divu naturālu skaitļu kvadrātu summu.
Programma izveidota: 16.10.2018.
**************************************************************************************/
#include <iostream>
using namespace std;
/*********************************************************
int divKvadrSumma(int a, int b);
Funkcija divKvadrSumma(a,b)
 atgriež kā rezultātu veselu skaitļu a un b kvadrātu summu.
**********************************************************/
int divKvadrSumma(int a, int b)
{
    return a*a + b*b;
}
int main()
{

int n;   /// dotais naturālais skaitlis
bool ir; /// true, ja atrasts kaut viens pāris
int ok;  /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do
{
    cout << "Noskaidro, vai doto naturālu skaitli n "
         << "var izteikt kā divu naturālu skaitļu kvadrātu summu" <<  endl;

    ir = false;
   do
   {
   cout << "Ievadiet naturālu skaitli n, n>=1:" <<endl;
   cin>>n;
   if(n<1)
    cout << "Kļūdaina vērtība. Jāievada naturāls skaitlis n, n>=1" << endl;
   }while(n<1);

   for (int n1=1;n1<n;n1++)
    for (int n2=1;n2<=n1;n2++)  /// n2<=n1 vajadzīgs, lai neatkārtotos skaitļu pāri
      if (divKvadrSumma(n1, n2) == n)
          {cout << n2 <<' ' << n1 << endl; /// izdrukā vispirms mazāko skaitli
           ir=true;
          }

    if (ir == false)
      cout << n << " nevar izteikt kā divu naturālu skaitļu kvadrātu summu" << endl;
   cout << endl;

    cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin>> ok;
}while(ok == 1);

return 0;
}
/******** Testu plāns **************************************
       n                            paredzamais rezultāts
       2                             1 1
      50                             5 5
                                     1 7
       3                             nevar izteikt
       5                             1 2
       0                             jāievada n>=1
      -1                             jāievada n>=1
***********************************************************/

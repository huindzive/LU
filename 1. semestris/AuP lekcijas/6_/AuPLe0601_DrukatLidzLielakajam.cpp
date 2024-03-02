// AuPLe0601_DrukatLidzLielakajam.cpp
/*************************************************
AuPLe0601. Ievadīt n veselus skaitļus un izdrukāt tos,
izdruku beidzot tad,
kad izdrukāts lielākais no skaitļiem.
**************************************************/
// Autors: Uldis Straujums
// Veidots: 11.10.2019.

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    int* mas;
    int liel;
    int iliel;
    int ok;    // Lietotāja atbilde: 1 - turpināt, 0 - beigt

    cout <<"Ievada n veselus skaitļus un izdrukā tos, "
         << "izdruku beidzot tad, kad izdrukāts lielākais no skaitļiem" << endl;

    do // Paredz atkārtotu programmas izpildi
    {
     do
     {
     cout << "Ievadiet skaitļu skaitu n, n>=1: " << endl;
     cin >> n;
     if (n<1) cout <<"Kļūdaina vērtība, ievadiet n>=1" << endl;
     }while(n<1);

    mas = new int[n];
     liel = INT_MIN; // Piešķir tādu vērtību,
                     // par kuru ievadītā vērtība noteikti būs lielāka (vai vienāda)
     iliel=0;
    for (int i=0;i<n;i++)
    {
     cout << "Ievadiet kārtējo skaitli: " << endl;
     cin  >> mas[i];
     if (mas[i]>liel){ liel=mas[i]; iliel=i;}
    }
    for (int i=0;i<=iliel;i++)
        cout << mas[i]<< ' ';

    delete[] mas;


     cout << endl;
      cout << " Vai turpināt (1) vai beigt (0)?" << endl;
      cin >> ok;
    }while(ok==1);

    return 0;
}

/********* Testu plāns ***************************
n    skaitļi            paredzamais rezultāts
3    1 3 2                   1  3
2    -2 -1                  -2 -1
1    5                       5
0                        jāievada n>=1
*************************************************/

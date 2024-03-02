/// ciparu_skaits.cpp
/**************************
Sastādīt funkciju cipskaits(n),
kas aprēķina naturāla skaitļa n ciparu skaitu.
Funkciju cipskaits(n) realizēt rekursīvi.
**********************/
/// Autors: Uldis Straujums
/// Izveidota: 02.11.2015.
/// Mainīta: 05.11.2021. Uzlaboti funkcijas komentāri

#include <iostream>
using namespace std;

/*****************************************
int cipskaits(int n);
Funkcija cipskaits(n)
atgriež kā rezultātu naturāla skaitļa n
ciparu skaitu.
******************************************/
int cipskaits( int n)
{
    if (n<=9) return 1;
    return 1 + cipskaits(n/10);
}

int main()
{
   int n;
   int ok; /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do /// paredz atkārtotu programmas izpildi
{
     /// Saņem ieejas datus
     do
     {
     cout<< "Ievadiet naturālu skaitli n, n>=0"<< endl;
     cin >> n;
     if (n<0) cout << "Kļūdaina vērtība. Jāievada skaitlis n, n>=0"<< endl;
     }while(n<0);


     /// Apstrādā skaitli n un paziņo rezultātu
     cout << endl;
     cout<< "Skaitļa " << n << " ciparu skaits ir "
         << cipskaits(n) << endl;


     cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
}while(ok == 1);

 return 0;
}

/********** Testu plāns *******************
n       paredzamais rezultāts
0       1
1       1
1237    41
-1      Kļūda, jāievada vismaz 0
******************************************/

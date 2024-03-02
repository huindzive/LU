/// ciparu_summa.cpp
/**************************
Sastādīt funkciju cipsum(n), kas aprēķina naturāla skaitļa n ciparu summu.
Funkciju cipsum(n) realizēt rekursīvi.
**********************/
/// Autors: Uldis Straujums
/// Veidota: 02.11.2015.
/// Mainīta: 05.11.2021. Uzlaboti funkcijas komentāri
#include <iostream>
using namespace std;

/****************************************
int cipsum(int n);
Funkcija cipsum(n)
atgriež kā rezultātu naturāla skaitļa n
ciparu summu.
****************************************/
int cipsum( int n)
{
    if (n<=0) return 0;
    return n%10 + cipsum(n/10);
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
     cout<< "Skaitļa " << n << " ciparu summa ir "
         << cipsum(n) << endl;


     cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
}while(ok == 1);

 return 0;
}
/********** Testu plāns *************
n       paredzamais rezultāts
0       0
1       1
103     4
-1      Kļūda, jāievada vismaz 0
************************************/

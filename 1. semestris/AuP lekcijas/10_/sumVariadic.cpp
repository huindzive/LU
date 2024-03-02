/// sumVariadic.cpp
/**************************
sumVariadic. Sastādīt C++ funkciju sum(n, x1,x2, ...),
kas aprēķina doto n veselo skaitļu summu.

Izveidot C++ programmu, kas pārbauda funkcijas sum darbību.
Paredzēt programmas atkārtošanas iespēju, ievadot 1.
**********************/
/// Autors: Uldis Straujums
/// Izveidota: 05.11.2021.
/// Mainīta: 6.11.2023. uzlaboti funkcijas komentāri

#include <iostream>
#include <cstdarg>
using namespace std;
/****************************************************************
int sum(int n, ...);
Funkcija sum(n, x1,x2, ..., xn)
 atgriež kā rezultātu doto n veselo skaitļu x1, x2, ... xn summu.
*****************************************************************/
int sum(int n, ...)
{
int sum;
int sk;
va_list args;
    va_start(args, n);
    sum = va_arg(args, int);
    for (int i=0;i<n-1;i++)
    {
        sk=va_arg(args, int);
        sum+=sk;
    }
    va_end(args);
    return sum;

}

int main()
{

   int x;
   int ok; /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do /// paredz atkārtotu programmas izpildi
   {


     /// Apstrādā datus un paziņo rezultātu
     cout << endl;
     cout<< "Summa ir "
         << sum(3, 4, 5, 7) << endl;  /// 16
     cout<< "Summa ir "
         << sum(5, 1, 2, 3, 4, -1) << endl;  /// 9

     cout << "Ievadiet skaitli: ";
     cin >> x;                              /// 3
     cout<< "Summa ir "
         << sum(5, 1, x, 3, 4, -1) << endl; /// 10

     cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
   }while(ok == 1);


   return 0;
}

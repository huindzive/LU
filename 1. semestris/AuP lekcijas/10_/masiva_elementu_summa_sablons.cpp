/// masiva_elementu_summa_sablons.cpp
/**************************
Sastādīt C++ funkciju veidni masiva_summa(a, n),
kas noskaidro elementu summu skaitļu masīvā
ar n elementiem.
Funkciju masiva_summa(a, n) realizēt rekursīvi.
Izveidot C++ programmu, kas ļauj lietotājam ievadīt skaitļu skaitu,
pašus skaitļus un izsauc funkciju masiva_summa.
Paredzēt programmas atkārtošanas iespēju, ievadot 1.
**********************/
/// Autors: Uldis Straujums
/// Veidota: 01.11.2016
/// Mainīta: 09.11.2020. Nomainīts programmas kodējums uz UTF-8
/// Mainīta: 05.11.2021. Uzlaboti funkcijas komentāri

#include <iostream>
using namespace std;

/*************************************************
T masiva_summa(const T a[], int n);
Funkcija masiva_summa(a, n)
 atgriež kā rezultātu elementu summu veselu skaitļu masīvā
 ar n elementiem..
*************************************************/
template <typename T>
T masiva_summa(const T a[], int n)
{
    if (n <= 0) return 0;
    else return    a[n-1] + masiva_summa(a, n-1);
}
/** Funkcijas variants, kurā sāk pārbaudi no masīva sākuma
T masiva_summa(const T* a, int n)
{
    if (n <= 0) return 0;
     else return a[0] + masiva_summa(a+1, n-1);
}
*/

int main()
{
   int* m; /// apstrādājamo skaitļu masīva mainīgais (norāde)
   int n;  /// apstrādājamo skaitļu skaits
   float mf[3];
   int ok; /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do /// paredz atkārtotu programmas izpildi
   {
     /// Saņem ieejas datus
     do
     {
     cout<< "Ievadiet skaitļu skaitu n, n>=1:"<< endl;
     cin >> n;
     if (n<1) cout << "Kļūdaina vērtība. Jāievada skaitlis n, n>=1"<< endl;
     }while(n<1);

     /// Izveido dinamisku masīvu
     m = new int[n];

     for (int i=0; i < n; i++)
     {
     cout << "Ievadiet " << i+1 << ". skaitli:" << endl;
     cin >> m[i];
     }

     /// Apstrādā datus un paziņo rezultātu
     cout << endl;
     cout<< "Elementu summa ir "
         << masiva_summa(m, n) << endl;

     delete []m;

     /// Apstrādā  statisku masīvu mf ar 3 reāliem elementiem
     for (int i=0; i < n; i++)
     {
     cout << "Ievadiet " << i+1 << ". reālo skaitli:" << endl;
     cin >> mf[i];
     }
     /// Apstrādā datus un paziņo rezultātu
     cout << endl;
     cout<< "Elementu summa ir "
         << masiva_summa(mf, n) << endl;
     cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
   }while(ok == 1);


   return 0;
}
/***************************** Testu plāns *********
n   skaitļi           paredzamais rezultāts
3    1 -3 -3          -5
4    -1 -3  3 7        6
0                      jāievada n>=1
1    5                 5
-1                     jāievada n>=1
****************************************************/

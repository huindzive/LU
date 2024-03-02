/// matrica_liel_skaits.cpp
/**************************
Le10_matrica_skaits. Sastādīt C++ funkciju
šablonu matr_liel_skaits(matr, m, n),
kas noskaidro lielākā elementa skaitu skaitļu matricā matr
ar m rindām un n kolonnām un atgriež skaitu kā rezultātu.
**********************/
/// Autors: Uldis Straujums
/// Izveidota: 09.11.2020
/// Mainīta: 3.11.2021. Uzlaboti funkciju komentāri

#include <iostream>
using namespace std;

/*******************************************************
int matr_liel_skaits(T**matr, int m, int n);
Funkciju šablons matr_liel_skaits(matr, m, n)
 atgriež kā rezultātu lielākā elementa skaitu
 dinamiskā skaitļu matricā matr ar m rindām un n kolonnām.
*********************************************************/
template <typename T>
int matr_liel_skaits(T**matr, int m, int n)
{
    int lskaits=0;
    T liel=matr[0][0];
    for(int r=0;r<m;r++)
        for(int k=0;k<n;k++)
        {
         if(matr[r][k]==liel) lskaits++;
         else if(matr[r][k]>liel){liel=matr[r][k];lskaits=1;}
        }
    return lskaits;
}
/*******************************************************
int matr_liel_skaits(T matr[][3], int m, int n);
Funkciju šablons matr_liel_skaits(matr, m, n)
 atgriež kā rezultātu lielākā elementa skaitu
 statiskā skaitļu matricā matr ar m rindām un 3 kolonnām.
*********************************************************/
template <typename T>
int matr_liel_skaits(T matr[][3], int m, int n)
{
    int lskaits=0;
    T liel=matr[0][0];
    for(int r=0;r<m;r++)
        for(int k=0;k<n;k++)
        {
         if(matr[r][k]==liel) lskaits++;
         else if(matr[r][k]>liel){liel=matr[r][k];lskaits=1;}
        }
    return lskaits;
}

int main()
{
   int** md; /// apstrādājamo skaitļu masīva mainīgais (norāde)
   int m, n;  /// rindas, kolonnas
   float** mdf;
   int ok; /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do /// paredz atkārtotu programmas izpildi
   {

                /// Apstrādā dinamiskus masīvus md un mdf
     /// Saņem ieejas datus
     do
     {
     cout<< "Ievadiet rindu skaitu m:"<< endl;
     cin >> m;
     if(m<1) cout << "Kļūda, jāievada m, m>=1" << endl;
     }while(m<1);
     do
     {
     cout<< "Ievadiet kolonnu skaitu n:"<< endl;
     cin >> n;
     if(n<1) cout << "Kļūda, jāievada n, n>=1" << endl;
     }while(n<1);

     /// Izveido dinamisku masīvu md m*n
     md = new int*[m];
     for(int r=0;r<m;r++)
        md[r]=new int[n];

     for (int r=0; r < m; r++)
     {
      for(int k=0;k<n;k++)
      {
       cout << "Ievadiet [" << r+1 << "]["<<k+1<<"]skaitli:" << endl;
       cin >> md[r][k];
      }
     }

     /// Apstrādā datus un paziņo rezultātu
     cout << endl;
     cout<< "lielākā elementa skaits: "
         << matr_liel_skaits(md, m, n) << endl<<endl;

      /// Atbrīvo dinamiska masīva md m*n atmiņu

     for(int r=0;r<m;r++)
         delete[] md[r];
     delete[] md;

     /// Saņem ieejas datus
     do
     {
     cout<< "Ievadiet rindu skaitu m:"<< endl;
     cin >> m;
     if(m<1) cout << "Kļūda, jāievada m, m>=1" << endl;
     }while(m<1);
     do
     {
     cout<< "Ievadiet kolonnu skaitu n:"<< endl;
     cin >> n;
     if(n<1) cout << "Kļūda, jāievada n, n>=1" << endl;
     }while(n<1);

     /// Izveido dinamisku masīvu mdf m*n
     mdf = new float*[m];
     for(int r=0;r<m;r++)
        mdf[r]=new float[n];

     for (int r=0; r < m; r++)
     {
      for(int k=0;k<n;k++)
      {
       cout << "Ievadiet [" << r+1 << "]["<<k+1<<"]skaitli:" << endl;
       cin >> mdf[r][k];
      }
     }

     /// Apstrādā datus un paziņo rezultātu
     cout << endl;
     cout<< "lielākā elementa skaits: "
         << matr_liel_skaits(mdf, m, n) << endl<< endl;

      /// Atbrīvo dinamiska masīva mdf m*n atmiņu

     for(int r=0;r<m;r++)
         delete[] mdf[r];
     delete[] mdf;
                  /// Apstrādā statiskus masīvus ms un msf
     int ms[2][3]={1, 1, 1, 1, 1, 1};
     float msf[2][3]={1.1, 1.1, -3, 3.4, 3.4, 3};
     cout<< "lielākā statiska int elementa skaits: "
         << matr_liel_skaits(ms, 2, 3) << endl;  /// 2
     cout<< "lielākā statiska float elementa skaits: "
         << matr_liel_skaits(msf, 2, 3) << endl;  /// 1

     cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
   }while(ok == 1);


   return 0;
}

/***************************** Testu plāns *********
n    m   skaitļi       paredzamais rezultāts
2    3    1 1 1
          1 1 1        6
2    3    1.1 1.1 -3
          3.4 3.4  3   2

statiska matrica
2    3    1 1 1
          1 1 1        6
2    3    1.1 1.1 -3
          3.4 3.4  3   2
****************************************************/

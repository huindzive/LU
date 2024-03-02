/// AuPLa0901.cpp
/***********************************************************************
Uldis Straujums, us22011
AuPLa0901. Izveidot C++ programmu, kas ievada N naturālus skaitļus,
saglabā skaitļus gan statiskā masīvā, gan dinamiskā masīvā un
aprēķina skaitļu mediānu.
Mediāna ir skaitlis, kas sadala kādu sakārtotu skaitļu kopu divās daļās.
Galīga skaitļu saraksta mediānu var atrast,
sakārtojot sarakstu augošā secībā, mediāna ir vidējā vērtība,
piemēram, (3, 3, 5, 9, 11) mediāna ir 5.
Ja sarakstā ir pāra skaits elementu,
tad mediānu iegūst kā sakārtota skaitļu saraksta
divu vidējo elementu summas pusi,
piemēram, (3, 5, 8, 9) mediāna ir (5 + 8)/ 2 = 6.5.
Mediānas aprēķināšanai izveidot funkciju.
Var pieņemt, ka skaitļi tiek ievadīti augošā kārtībā.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Programma izveidota: 1.11.2022.
***********************************************************************/
#include<iostream>
using namespace std;
const int NMAKS = 20;
/**************************************************************
float mediana(int skaitli[], int N);
Funkcija mediana(skaitli, N)
 atgriež kā rezultātu naturālu skaitļu masīva skaitli ar N elementiem
 mediānu.
***************************************************************/
float mediana(int skaitli[], int N)
{
  float med;
  if(N%2==0)
  {
     med = (float)(skaitli[N/2-1]+skaitli[N/2]) /2;
  }
  else
    {
    med = skaitli[N/2];

    }
  return med;
}
int main()
{
    int ok;
    do
    {
      int skaitli[NMAKS];
      int* dskaitli;
      int N;
      int dN;
      float rez;
      float drez;


  cout << "Aprēķina N sakārtotu naturālu skaitļu mediānu" << endl;
  /// Apstrādā statisku masīvu mas ar N naturālu skaitļu elementiem
          do
          {
            cout <<"Ievadiet statiska masīva skaitļu skaitu N, 1<=N<=" << NMAKS << ": "<<endl;
            cin >> N;
            if(N<1 or N>NMAKS)
                cout << "Kļūdaina vērtība. Jāievada N, 1<=N<=" << NMAKS << endl;
          }while(N<1 or N>NMAKS);

          int sk;
          for(int i=0;i<N;i++)
          {
              do
              {
              cout << "Ievadiet naturālu skaitli, kas ir nenegatīvs: " << endl;
              cin>>sk;
              if(sk<0)
                cout <<"Kļūdaina vērtība. Jāievada nenegatīvs skaitlis." << endl;
              }while(sk<0);
              skaitli[i] = sk;
          }

           rez = mediana(skaitli, N);

          cout << "Statiska masīva mediāna ir " << rez << endl;

  /// Apstrādā dinamisku masīvu dmas ar dN naturālu skaitļu elementiem
           do
          {
            cout <<"Ievadiet dinamiska masīva skaitļu skaitu N, N>=1: " << endl;
            cin >> dN;
            if(dN<1)
                cout << "Kļūdaina vērtība. Jāievada N, N>=1" << endl;
          }while(dN<1);

         dskaitli = new int[dN];
         for(int i=0;i<dN;i++)
          {
              do
              {
              cout << "Ievadiet naturālu skaitli, kas ir nenegatīvs: " << endl;
              cin>>sk;
              if(sk<0)
                cout <<"Kļūdaina vērtība. Jāievada nenegatīvs skaitlis." << endl;
              }while(sk<0);
              dskaitli[i] = sk;
          }

          drez = mediana(dskaitli, dN);

          cout << "Dinamiska masīva mediāna ir " << drez << endl;

           delete[] dskaitli;
     cout <<"Vai turpināt(1) vai beigt(0)? "<< endl;
     cin >>ok;
    }while(ok == 1);
}
/*************Testu plāns*******************
  N    skaitļi       paredzamais rezultāts
  5    3 3 5 9 11       5
  4    3 5 8 9          6.5
  0                   kļūda, jāievada N>0
  21                  kļūda, jāievada N<=20
  1    -1             kļūda, jāievada skaitlis>=0
  1     1               1
********************************************/

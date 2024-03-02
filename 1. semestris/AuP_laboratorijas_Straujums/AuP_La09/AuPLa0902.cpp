/// AuPLa0902.cpp
/***********************************************************************
Uldis Straujums, us22011
AuPLa0902. Izveidot C++ programmu, kas ievada N naturālus skaitļus,
saglabā skaitļus vektorā un aprēķina skaitļu mediānu.
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
Programma izveidota: 27.10.2020.
***********************************************************************/
#include <iostream>
#include <vector>
using namespace std;

/********************************************************
float mediana(const vector<int> &vekt);
Funkcija mediana(vekt)
 atgriež kā rezultātu sakārtotu naturālu skaitļu vektora vekt mediānu.
********************************************************/
float mediana(const vector<int> &vekt)
{
    float med;
    int N = vekt.size();
    if (N%2==1) med = vekt[N/2];
    else med = float(vekt[N/2-1] + vekt[N/2])/2;
    return med;
}
int main()
{
   int ok; /// Lietotāja atbilde: 1 - turpināt, 0 - beigt
do
{
   int N;
   vector<int> v;
   cout << "Aprēķina N sakārtotu naturālu skaitļu mediānu" << endl;
   do
   {
    cout <<"Ievadiet skaitļu skaitu N, N>=1: "<< endl;
    cin >> N;
    if (N<1) cout << "Kļūdaina vērtība. Jāievada skaitļu skaits N, N>=1"<<endl;
   }while(N<1);
   int sk;
   for (int i=0;i<N;i++)
   {
       do
       {
       cout << "Ievadiet naturālu skaitli >=0:"<<endl;
       cin >> sk;
       if(sk<0)cout <<"Kļūdaina vērtība. Jāievada skaitlis >=0" << endl;
       }while(sk<0);
       v.push_back(sk);
   }
   cout << "Mediāna ir " << mediana(v)<< endl;

   cout << endl;
   v.resize(0);

   cout << " Vai turpināt (1) vai beigt (0)?" << endl;
   cin >> ok;
}while(ok==1);

    return 0;
}
/*************Testu plāns*******************
  N    skaitļi       paredzamais rezultāts
  5    3 3 5 9 11       5
  4    3 5 8 9          6.5
  0                   kļūda, jāievada N>0
  1    -1             kļūda, jāievada skaitlis>=0
  1     1             1
********************************************/

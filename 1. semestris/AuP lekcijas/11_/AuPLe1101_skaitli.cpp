/// AuPLe1101_skaitli.cpp
/*********************************************************************************
Uldis Straujums, us22011
AuPLe1101_skaitli. Sastādīt C++ funkciju lielBiezakais(v, n),
kas skaitļu virknē v no n skaitļiem noskaidro skaitli,
kas sastopams visbiežāk un atgriež to kā rezultātu.
Ja tādi ir vairāki, tad atgriež lielāko.
Sastādīt arī izsaucošo programmu.
Programma izveidota: 13.11.2023.
*********************************************************************************/
#include<iostream>
#include<cstring>
using namespace std;
/******************************************************************
int lielBiezakais(int *v, int n);
Funkcija lielBiezakais(v, n)
 atgriež kā rezultātu biežāko skaitli veselu skaitļu virknē v.
 Ja biežākie skaitļi ir vairāki, tad atgriež lielāko.
******************************************************************/
int lielBiezakais(int *v, int n)
{
 struct skBiezums
 {
     int sk;
     int biez;
 };
 skBiezums *biezumi; /// skaitļu biežumu masīva mainīgais
 int biezsk;         /// rezultāts - biežākais skaitlis
 int lielbiezums;    /// lielākais biežums
 int skaits;         /// Mainīgā dubultās lomas metode -
                     /// mainīgajam skaits ir divas lomas:
                     /// 1) pašlaik atrasto dažādo skaitļu skaits virknē v,
                     /// 2) brīvās vietas indekss struktūru masīvā biezumi.


bool ir;             /// kārtējais skaitlis jau ir sastapts

 biezumi = new skBiezums[n]; /// paredz vietu, ja visi simboli ir atšķirīgi

 /// Aizpilda struktūru masīvu biezumi ar atšķirīgajiem skaitļiem un to biežumiem
 /// Dažādo skaitļu skaits ir mainīgajā skaits
 biezumi[0].sk=v[0];
 biezumi[0].biez=1;
 skaits =1;
 for (int i=1;i<n;++i)
 {
     ir = false;
     for(int j=0;j<skaits;++j)
     {
         if(v[i]==biezumi[j].sk)
            {biezumi[j].biez++; ir=true;break;}
     }
     if(!ir)
        {biezumi[skaits].sk=v[i]; biezumi[skaits].biez=1;skaits++;}
 }
 /// Atrod lielāko skaitli biezsk ar lielāko biežumu struktūru masīvā biezumi,
 /// kurā ir skaits aizpildīti elementi
 biezsk=biezumi[0].sk;
 lielbiezums=biezumi[0].biez;
 for (int i=1;i<skaits;++i)
 {
    if(biezumi[i].biez>lielbiezums)
        {lielbiezums=biezumi[i].biez; biezsk=biezumi[i].sk;}
    if(biezumi[i].biez==lielbiezums && biezumi[i].sk>biezsk)
        {lielbiezums=biezumi[i].biez; biezsk=biezumi[i].sk;}
 }
  delete [] biezumi;

return biezsk;
}

int main()
{
int* sv;
int n;

do
{
 cout <<"Ievadiet skaitļu skaitu n, n>=1: "<< endl;
 cin >> n;
 if(n<1) cout <<"Kļūdaina vērtība. Jāievada n, n>=1."<< endl;
}while(n<1);

sv = new int[n];
for (int i=0; i<n;++i)
{
 cout << "Ievadiet veselu skaitli: "<< endl;
 cin >> sv[i];
}
cout << "Visbiežāk sastopamais lielākais veselais skaitlis: "
     << lielBiezakais(sv, n) << endl;

 delete[] sv;
}
/*************   Testu plāns *********************
  n     skaitļi          paredzamais rezultāts
  3      -3 2 1            2
  6     1 1 3 3 -1 -1      3
  1     17                17
  0                       vajag n>=1
**************************************************/

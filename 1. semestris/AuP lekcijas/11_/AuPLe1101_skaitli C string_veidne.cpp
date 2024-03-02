/// AuPLe1101_skaitli C string_veidne.cpp
/*********************************************************************************
Uldis Straujums, us22011
AuPLe1101_skaitli C string_veidne. Sastādīt C++ funkciju veidni lielBiezakais(v, n),
kas elementu virknē v no n elementiem (skaitlis vai C string) noskaidro elementu,
kas sastopams visbiežāk un atgriež to kā rezultātu.
Ja tādi ir vairāki, tad atgriež lielāko.
Sastādīt arī izsaucošo programmu.
Programma izveidota: 13.11.2023.
*********************************************************************************/
#include<iostream>
#include<cstring>
using namespace std;
template <typename T>
/******************************************************************
int lielBiezakais(T* v, int n);
Funkcija lielBiezakais(v, n)
 atgriež kā rezultātu biežāko elementu virknē v (skaitlis vai C string).
 Ja biežākie elementi ir vairāki, tad atgriež lielāko.
******************************************************************/
int lielBiezakais(T* v, int n)
{
 struct elemBiezums
 {
     T elem;
     int biez;
 };
 elemBiezums *biezumi; /// elementu biežumu masīva mainīgais
 T biezelem;         /// rezultāts - biežākais elements
 int lielbiezums;    /// lielākais biežums
 int skaits;         /// Mainīgā dubultās lomas metode -
                     /// mainīgajam skaits ir divas lomas:
                     /// 1) pašlaik atrasto dažādo elementu skaits virknē v,
                     /// 2) brīvās vietas indekss struktūru masīvā biezumi.


bool ir;             /// kārtējais skaitlis jau ir sastapts

 biezumi = new elemBiezums[n]; /// paredz vietu, ja visi elementi ir atšķirīgi

 /// Aizpilda struktūru masīvu biezumi ar atšķirīgajiem elementiem un to biežumiem
 /// Dažādo elementu skaits ir mainīgajā skaits
 biezumi[0].elem=v[0];
 biezumi[0].biez=1;
 skaits =1;
 for (int i=1;i<n;++i)
 {
     ir = false;
     for(int j=0;j<skaits;++j)
     {
         if(v[i]==biezumi[j].elem)
            {biezumi[j].biez++; ir=true;break;}
     }
     if(!ir)
        {biezumi[skaits].elem=v[i]; biezumi[skaits].biez=1;skaits++;}
 }
 /// Atrod lielāko elementu biezsk ar lielāko biežumu struktūru masīvā biezumi,
 /// kurā ir skaits aizpildīti elementi
 biezelem=biezumi[0].elem;
 lielbiezums=biezumi[0].biez;
 for (int i=1;i<skaits;++i)
 {
    if(biezumi[i].biez>lielbiezums)
        {lielbiezums=biezumi[i].biez; biezelem=biezumi[i].elem;}
    if(biezumi[i].biez==lielbiezums && biezumi[i].elem>biezelem)
        {lielbiezums=biezumi[i].biez; biezelem=biezumi[i].elem;}
 }
  delete [] biezumi;

return biezelem;
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

 float fv[20];
 for (int i=0;i<20;++i)fv[i]=(float)i;
 cout << "Visbiežāk sastopamais lielākais peldošais skaitlis: "
     << lielBiezakais(fv, 20) << endl;
 char cv[6]="ab cd";
 cout << "Visbiežāk sastopamais lielākais simbols: "
     << (char)lielBiezakais(cv, 6) << endl;
}
/*************   Testu plāns *********************
  n     elementi         paredzamais rezultāts
  3      -3 2 1            2
                          19.0
  6     "ab cd"           'd'
**************************************************/

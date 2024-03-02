/// AuPLe1101.cpp
/*********************************************************************************
Uldis Straujums, us22011
AuPLe1101. Sastādīt C++ funkciju lielBiezakais(v),
kas simbolu virknē v noskaidro simbolu, kas sastopams visbiežāk un
atgriež to kā rezultātu.
Ja tādi ir vairāki, tad atgriež lielāko.
Sastādīt arī izsaucošo programmu.
Aprēķinu veikt gan zema līmeņa simbolu virknei, gan augsta līmeņa simbolu virknei.
Programma izveidota: 30.11.2021.
Mainīts: 13.11.2023. Uzlaboti funkciju apraksti
*********************************************************************************/
#include<iostream>
#include<cstring>
using namespace std;
/******************************************************************
char lielBiezakais(char *v);
Funkcija lielBiezakais(v)
 atgriež kā rezultātu biežāko simbolu zema līmeņa simbolu virknē v.
 Ja biežākie simboli ir vairāki, tad atgriež lielāko.
******************************************************************/
char lielBiezakais(char *v)
{
 struct simbBiezums
 {
     char ch;
     int biez;
 };
 simbBiezums *biezumi;/// simbolu biežumu masīva mainīgais
 int biezch;          /// rezultāts - biežākais simbols
 int lielbiezums;     /// lielākais biežums
 int skaits;          /// Mainīgā dubultās lomas metode -
                      /// mainīgajam skaits ir divas lomas:
                      /// 1) pašlaik atrasto dažādo simbolu skaits virknē v,
                      /// 2) brīvās vietas indekss struktūru masīvā biezumi.

 bool ir;             /// kārtējais simbols jau ir sastapts


 biezumi = new simbBiezums[strlen(v)]; /// paredz vietu, ja visi simboli ir atšķirīgi

 /// Aizpilda struktūru masīvu biezumi ar atšķirīgajiem simboliem un to biežumiem
 /// Dažādo simbolu skaits ir mainīgajā skaits
 biezumi[0].ch=v[0];
 biezumi[0].biez=1;
 skaits =1;
 for (int i=1;i<strlen(v);++i)
 {
     ir = false;
     for(int j=0;j<skaits;++j)
     {
         if(v[i]==biezumi[j].ch)
            {biezumi[j].biez++; ir=true;break;}
     }
     if(!ir)
        {biezumi[skaits].ch=v[i]; biezumi[skaits].biez=1;skaits++;}
 }
 /// Atrod lielāko simbolu biezch ar lielāko biežumu struktūru masīvā biezumi,
 /// kurā ir skaits aizpildīti elementi
 biezch=biezumi[0].ch;
 lielbiezums=biezumi[0].biez;
 for (int i=1;i<skaits;++i)
 {
    if(biezumi[i].biez>lielbiezums)
        {lielbiezums=biezumi[i].biez; biezch=biezumi[i].ch;}
    if(biezumi[i].biez==lielbiezums && biezumi[i].ch>biezch)
        {lielbiezums=biezumi[i].biez; biezch=biezumi[i].ch;}
 }
  delete [] biezumi;

return biezch;
}
/*******************************************************************
char lielBiezakais(string v);
Funkcija lielBiezakais(v) -
atgriež kā rezultātu biežāko simbolu augsta līmeņa simbolu virknē v.
 Ja biežākie simboli ir vairāki, tad atgriež lielāko.
Ja biežākie simboli ir vairāki, tad atgriež lielāko.
********************************************************************/
char lielBiezakais(string v)
{
 struct simbBiezums
 {
     char ch;
     int biez;
 };
 simbBiezums *biezumi;/// simbolu biežumu masīva mainīgais
 int biezch;          /// rezultāts - biežākais simbols
 int lielbiezums;     /// lielākais biežums
 int skaits;          /// Mainīgā dubultās lomas metode -
                      /// mainīgajam skaits ir divas lomas:
                      /// 1) pašlaik atrasto dažādo simbolu skaits virknē v,
                      /// 2) brīvās vietas indekss struktūru masīvā biezumi.

 bool ir;             /// kārtējais simbols jau ir sastapts

 biezumi = new simbBiezums[v.size()]; /// paredz vietu, ja visi simboli ir atšķirīgi

 /// Aizpilda struktūru masīvu biezumi ar atšķirīgajiem simboliem un to biežumiem
 /// Dažādo simbolu skaits ir mainīgajā skaits
 biezumi[0].ch=v[0];
 biezumi[0].biez=1;
 skaits =1;
 for (int i=1;i<v.size();++i)
 {
     ir = false;
     for(int j=0;j<skaits;++j)
     {
         if(v[i]==biezumi[j].ch)
            {biezumi[j].biez++; ir=true;break;}
     }
     if(!ir)
        {biezumi[skaits].ch=v[i]; biezumi[skaits].biez=1;skaits++;}
 }
 /// Atrod lielāko simbolu biezch ar lielāko biežumu struktūru masīvā biezumi,
 /// kurā ir skaits aizpildīti elementi
 biezch=biezumi[0].ch;
 lielbiezums=biezumi[0].biez;
 for (int i=1;i<skaits;++i)
 {
    if(biezumi[i].biez>lielbiezums)
        {lielbiezums=biezumi[i].biez; biezch=biezumi[i].ch;}
    if(biezumi[i].biez==lielbiezums && biezumi[i].ch>biezch)
        {lielbiezums=biezumi[i].biez; biezch=biezumi[i].ch;}
 }
  delete [] biezumi;

return biezch;
}


int main()
{
char zv1[21];
string av1;

cout << "Ievadiet teksta rindiņu, ne garāku par 20 simboliem: "<< endl;
cin.getline(zv1, 21);                               /// "aa bbB B"
cout << "Zema līmeņa virknē \""<<zv1 <<"\" visbiežāk ir sastopams simbols '"
     << lielBiezakais(zv1) << '\''<< endl;         /// 'b'

cout << "Ievadiet teksta rindiņu: " << endl;
getline(cin, av1);                                 /// "aa bbB B"
cout << "Augsta līmeņa virknē \""<<av1 <<"\" visbiežāk ir sastopams simbols '"
     << lielBiezakais(av1) << '\''<< endl;         /// 'b'

}

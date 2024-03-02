/// AuPLa1302.cpp
/********************************************************************************
Uldis Straujums, us22011
AuPLa1302. Izveidot C++ funkciju, kas noskaidro gan pirmo simbolu,
kurš simbolu virknē parādās visbiežāk, gan biežākā simbola parādīšanās reižu skaitu.
Izveidot arī izsaucošo programmu,
kurā tiek noskaidrots gan biežākais simbols,
gan biežākā simbola parādīšanās reižu skaits.
Aprēķinu veikt gan zema līmeņa simbolu virknei,
gan augsta līmeņa simbolu virknei.
Programma izveidota: 26.11.2021.
Mainīta: 1.12.2023. Uzlabots testu plāns - pielikti neburtu simboli;
                    Funkcijas rezultāts piešķirts mainīgajam, nevis uzreiz izdrukāts
**********************************************************************************/
#include <iostream>
#include<cstring>
using namespace std;

/************************************************************************
int biezSimb_unSkaits(const char *v, char &simb);
Funkcija biezSimb_unSkaits(v, simb)
 atgriež kā rezultātu biežumu pirmajam simbolam,
 kurš zema līmeņa simbolu virknē v parādās visbiežāk.
 Biežāko simbolu ieraksta argumentā simb.
************************************************************************/
int biezSimb_unSkaits(const char *v, char &simb)
{
int biez;
char simb_tek;
int biez_tek;

simb=v[0]; biez=1;
for (int i=0;i<strlen(v);i++)
{
 simb_tek=v[i];biez_tek=1;
 for (int j=i+1;j<strlen(v);j++)
 {
     if(v[j]==simb_tek)biez_tek++;
 }
 if(biez_tek>biez){biez=biez_tek; simb=simb_tek;}
}
return biez;
}
/*************************************************************************
int biezSimb_unSkaits(const string v, char &simb);
Funkcija biezSimb_unSkaits(v, simb)
 atgriež kā rezultātu biežumu pirmajam simbolam,
 kurš augsta līmeņa simbolu virknē v parādās visbiežāk.
 Biežāko simbolu ieraksta argumentā simb.
*************************************************************************/
int biezSimb_unSkaits(const string v, char &simb)
{
int biez;
char simb_tek;
int biez_tek;

simb=v[0]; biez=1;
for (int i=0;i<v.size();i++)
{
 simb_tek=v[i];biez_tek=1;
 for (int j=i+1;j<v.size();j++)
 {
     if(v[j]==simb_tek)biez_tek++;
 }
 if(biez_tek>biez){biez=biez_tek; simb=simb_tek;}
}
return biez;
}
int main()
{
    char vz[21];
    string va;
    char simb;
    int biez;

   cout <<"Ievadiet teksta rindiņu zema līmeņa simbolu virknei, ne garāku par 20 simboliem: "<< endl;
   cin.getline(vz, 21);
   biez = biezSimb_unSkaits(vz, simb);
   cout << "Simbolu virknē \""<<vz<<"\" parādās visbiežāk - "
        << biez << " reizes simbols '"<<simb<<"'"<< endl;
   cout <<"Ievadiet teksta rindiņu augsta līmeņa simbolu virknei: "<< endl;
   getline(cin, va);
   biez = biezSimb_unSkaits(va, simb);
   cout << "Simbolu virknē \""<<va<<"\" parādās visbiežāk - "
        << biez << " reizes simbols '"<<simb<<"'"<< endl;
}
/*************** Testu plāns *****************
simbolu virkne       paredzamais rezultāts
"a ?b b!d"               ' ' 2
"c c c cc"               'c' 5
***********************************************/

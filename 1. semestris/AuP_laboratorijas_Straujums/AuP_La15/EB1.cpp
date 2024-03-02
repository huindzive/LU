/// EB1.cpp
/**************************************************************************************
EB1. Izveidot C++ funkciju, kas saņem divas teksta rindiņas un
izveido no tām trešo teksta rindiņu, kurā ir tikai latīņu alfabēta burti,
turklāt tieši pēc pirmās rindiņas 1.burta ir 2.rindiņas 1.burts, utt.
Izveidot arī funkciju pārbaudošo programmu, kurā lietotājs ievada abas teksta rindiņas.
Piemērs#1. 1.rindiņa “1a2b3 cdd”, 2.rindiņa “A 2 B3  17”. Izveidotā rindiņa “aAbBcdd”.
Piemērs#2. 1.rindiņa “A 2 B3  17”, 2.rindiņa “1a2b3 cdd”. Izveidotā rindiņa “AaBbcdd”.
**************************************************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 15.12.2020.
/// Mainīta: 10.12.2022. Uzlaboti funkcijas komentāri
/// Mainīta: 12.12.2023. Uzlaboti funkcijas komentāri

#include <iostream>
#include <cctype>
#include <string>
using namespace std;
/*********************************************************************
string tikaiBurti(string r1, string r2);
Funkcija tikaiBurti(r1, r2)
atgriež kā rezultātu augsta līmeņa simbolu virkni,
kas satur tikai latīņu alfabēta burtus no
dotajām teksta rindiņām r1 un r2 (augsta līmeņa simbolu virknes),
turklāt tieši pēc pirmās rindiņas 1.burta ir 2.rindiņas 1.burts, utt.
*********************************************************************/
string tikaiBurti(string r1, string r2)
{
    string jauna=""; /// Burtus pievienos ar + operāciju
    int i1=0;
    int i2=0;
    /// Realizē divu rindiņu r1 un r2 sapludināšanu(merge)
    /// trešajā rindiņā jauna,
    /// kamēr nav aplūkota visa r1 un nav aplūkota visa r2:
    ///  pievieno jaunajai rindiņai burtus no r1 un r2 -
    ///  tieši pēc pirmās rindiņas 1.burta pievieno 2.rindiņas 1.burtu, utt.
    while(i1<r1.size()&&i2<r2.size())
    {
        if(isalpha(r1[i1]))
            {jauna+=r1[i1];
             while(!isalpha(r2[i2])&&i2<r2.size())i2++;
             if (i2==r2.size()){i1++;break;} /// Lai tiktu tālāk pa 1.rindiņu
             else {jauna+=r2[i2];i2++;}
            }
        i1++;
    }
    /// kamēr nav beigusies r1, bet ir beigusies r2; pievieno burtus no r1
    while(i1<r1.size())
    {
     if(isalpha(r1[i1]))
      jauna+= r1[i1];
     i1++;
    }
    /// kamēr nav beigusies r2, bet ir beigusies r1; pievieno burtus no r2
    while(i2<r2.size())
    {
      if(isalpha(r2[i2]))
       jauna+= r2[i2];
      i2++;
    }
return jauna;
}


int main()
{
string r1, r2; /// dotās teksta rindiņas
string jaunarindina;
int ok; /// lietotāja atbilde: 1 - turpināt, 0 - beigt

    do /// paredz atkārtotu programmas izpildi
{
   cout << "Ievadiet 1.teksta rindiņu:" <<endl;
   getline(cin, r1);
   cout << "Dotā 1.teksta rindiņa: \""<< r1 << "\"" << endl;
   cout << "Ievadiet 2.teksta rindiņu:" <<endl;
   getline(cin, r2);
   cout << "Dotā 2.teksta rindiņa: \""<< r2 << "\"" << endl;

   jaunarindina = tikaiBurti(r1, r2);

   cout << "Jaunā  teksta rindiņa: \""<< jaunarindina << "\"" << endl;

   cout << endl;
     cout << " Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
    cin.ignore(); /// lai sāktu no tukšas plūsmas
                  /// (ignorē iepriekš ievadīto ENTER)
}while(ok == 1);

return 0;
}
/*********** Testu plāns *****************************
dotās rindiņas            paredzamais rezultāts
"1a2b3 cdd"  "A 2 B3  17"  "aAbBcdd"
"A 2 B3  17" "1a2b3 cdd"   "AaBbcdd"
"abcdefg"    "ABCDEFG"     "aAbBcCdDeEfFgG"
*****************************************************/

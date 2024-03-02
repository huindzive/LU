/*************************************
Uldis Straujums, us22011
AuPLa0803. Sastādīt C++ funkciju center(s, garums, aizpilde),
kas ir līdzīga Python metodei center(length, fill_character).
Funkcija center(s, garums, aizpilde)
no saņemtās augsta līmeņa simbolu virknes s izveido
augsta līmeņa simbolu virkni ar garumu garums,
kurā dotā virkne s ir novietota centrēti un
abas malas ir aizpildītas ar simbolu aizpilde.
Noklusētā simbola aizpilde vērtība ir atstarpes simbols (“Space”).
Sastādīt C++ programmu, kurā tiek izsaukta
funkcija center(s, garums, aizpilde).
Programma izveidota: 27.10.2023.
***************************************/
#include<iostream>
using namespace std;
/*******************************************************************
string center(string s, int garums, char aizpilde=' ');
Funkcija center(s, garums, aizpilde)
 atgriež kā rezultātu augsta līmeņa simbolu virkni ar garumu garums,
kurā dotā virkne s ir novietota centrēti un
abas malas ir aizpildītas ar simbolu aizpilde.
*******************************************************************/
string center(string s, int garums, char aizpilde=' ')
{
  string rez = "";
  string kreisa = "";
  string labeja = "";

  int aizpildgarums = (garums-s.length());
  int aizpildgarumsK, aizpildgarumsL;
  if(aizpildgarums<=0)
  { return s.substr(0,garums);}
  if (aizpildgarums%2==0)
    aizpildgarumsK=aizpildgarumsL=aizpildgarums/2;
  else
    {aizpildgarumsK = aizpildgarums/2+1;  /// Python center metode garāko aizpildījumu
                                         /// liek kreisajā pusē
    aizpildgarumsL = aizpildgarums/2;
    }

  /// Aizpilda simbolu virkni kreisa ar vajadzīgo skaitu simbolu (aizpilde)
  for(int i=0;i<aizpildgarumsK;++i) kreisa+=aizpilde;
  /// Aizpilda simbolu virkni labeja ar vajadzīgo skaitu simbolu (aizpilde)
  for(int i=0;i<aizpildgarumsL;++i) labeja+=aizpilde;
  rez+= kreisa;
  rez+=s;
  rez+= labeja;
  return rez;
}
int main()
{
   cout<< center("abc", 15, '*')<< endl;  /// "******abc******"
   cout<< center("abc", 15)<< endl;       /// "      abc      "
   cout<< center("abc", 16, '*')<< endl;  /// "*******abc******"
   cout<< center("abc", 2, '*')<< endl;   /// "ab"
}

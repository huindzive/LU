/// AuPLa1102.cpp
/************************************************************************
Uldis Straujums, us22011
AuPLa1102. Palindroms ir tāda simbolu virkne,
kas vienādi lasāma no sākuma un no beigām, ignorējot atdalītājsimbolus.
Izveidot C++ funkciju bool strikts_palindroms(const string &s),
kas noskaidro, vai simbolu virkne s ir strikts palindroms un atgriež true,
ja virkne ir strikts palindroms, bet atgriež false pretējā gadījumā.
Strikts palindroms ir tāds palindroms, kurā atdalītājsimboli –
atstarpes - ir vienādi izkārtotas abos virzienos.
Var uzskatīt, ka simbolu virkne satur tikai mazos burtus,
ciparus un atstarpes.
Piemēram, strikti palindromi ir:
“alus ira ari sula”
“aka”
“step on no pets”
“rats live on no evil star”
Palindroms, kas nav strikts palindroms, ir “Sile putra kartupelis”.
Izveidot arī izsaucošo programmu,
kurā tiek izsaukta funkcija strikts_palindroms.
Programma izveidota: 17.11.2020.
Mainīta: 12.11.2021. Uzlaboti funkciju komentāri
***********************************************************************/

#include <iostream>
#include<string>
using namespace std;
/**
 bool strikts_palindroms(const string &s);
Funkcija strikts_palindroms(s)
 atgriež kā rezultātu true, ja virkne s ir strikts palindroms, atgriež false pretējā gadījumā.
 Strikts palindroms ir tāds palindroms, kurā atdalītājsimboli –
 atstarpes - ir vienādi izkārtotas abos virzienos.
**/
bool strikts_palindroms(const string &s)
{
    if(s.size()<=1)return true;
    if(s[0]==s[s.size()-1]) return strikts_palindroms(s.substr(1,s.size()-2));
    else return false;
}
int main()
{
  string v ="alus ira ari sula";
  string v2="ab";
  string v3="rats live on no evil star";

  cout << strikts_palindroms(v) << endl;  /// 1
  cout << strikts_palindroms(v2) << endl; /// 0
  cout << strikts_palindroms(v3) << endl; /// 1

    return 0;
}

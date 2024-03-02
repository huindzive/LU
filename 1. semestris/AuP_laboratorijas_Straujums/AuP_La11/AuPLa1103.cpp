/// AuPLa1103.cpp
/*******************************
Uldis Straujums, us22011
AuPLa1103. Palindroms ir tāda simbolu virkne,
kas vienādi lasāma no sākuma un no beigām, ignorējot atdalītājsimbolus.
Izveidot C++ funkciju bool palindroms(const string& s),
kas noskaidro, vai simbolu virkne s ir palindroms un atgriež true,
ja virkne ir  palindroms, bet atgriež false pretējā gadījumā.
Piemēram,  palindromi ir:
“alus ira ari sula”
“aka”
“step on no pets”
“rats live on no evil star”
“Sile, putra, kartupelis”.
Izveidot arī izsaucošo programmu, kurā tiek izsaukta funkcija palindroms.
Programma izveidota: 17.11.2020.
Mainīta: 12.11.2021. Uzlaboti funkciju komentāri
**************************************/
#include <iostream>
#include<string>
using namespace std;
/**
 string par_mazajiem(const string &s);
Funkcija par_mazajiem(s)
 atgriež kā rezultātu jaunu virkni, kas izveidota no
 dotās virknes s visiem burtiem, pārveidotiem par mazajiem burtiem.
**/
string par_mazajiem(const string &s)
{
    string rez="";
    for(auto it=s.begin();it!=s.end();++it)
     if(isalpha(*it)) rez+=tolower(*it);
     else rez+=*it;

    return rez;
}
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
/**
string bez_atdalitajiem(const string &s);
 Funkcija bez_atdalitajiem(s)
 atgriež kā rezultātu jaunu virkni, kas izveidota no dotās virknes s simboliem,
 izmetot visus atdalītājus " ,-;".
**/
string bez_atdalitajiem(const string &s)
{
    const string delimiters=" ,-;";
    string rez="";
    for(auto it=s.begin();it!=s.end();++it)
     if(delimiters.find(*it)==string::npos) rez+=*it;

    return rez;
}
/**
bool palindroms(const string &s);
 Funkcija palindroms(s)
 atgriež kā rezultātu true, ja virkne s ir palindroms, atgriež false pretējā gadījumā.
 Palindroms ir tāda simbolu virkne,
 kas vienādi lasāma no sākuma un no beigām, ignorējot atdalītājsimbolus " ,-;".
**/
bool palindroms(const string &s)
{
    return strikts_palindroms(bez_atdalitajiem(par_mazajiem(s)));
}
int main()
{
  string v ="Alus ira ari sula";
  string v2="ab";
  string v3="RATS LIVE ON NO EVIL STAR";
  string v4="Sile, putra, kartupelis";


  cout << palindroms(v) << endl;  /// 1
  cout << palindroms(v2) << endl; /// 0
  cout << palindroms(v3) << endl; /// 1
  cout << palindroms(v4) << endl; /// 1

    return 0;
}

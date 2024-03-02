/// find_overloaded_char.cpp
/***********************************************************
find_overloaded_char. Dotas zema līmeņa simbolu virkne vz un
augsta līmeņa simbolu virkne va.
Atrast pirmo pozīciju (0,1 utt.),
kurā atrodas ievadītais simbols s virknēs vz un va.
Ja simbols s nav atrasts,
tad atgriezt negatīvu vērtību (-1).
*****************************************************/
/// Autors: Uldis Straujums
/// Izveidota: 15.10.2021.

#include <iostream>
#include<cstring>
using namespace std;
/**************************************************
int find(char* v, char s);
Funkcija find(v, s) atrod pirmo pozīciju (0, 1...),
kurā atrodas simbols s zema līmeņa virknē v.
Ja nav atrasts, tad atgriež negatīvu vērtību (-1).
***************************************************/
int find(char* v, char s)
{
cout << "Apstrādā zema līmeņa simbolu virkni" << endl;
for (int i=0; i<strlen(v); i++)
if (v[i]==s) return i;
return -1;
}
/****************************************************
int find(string v, char s);
Funkcija find(v, s) atrod pirmo pozīciju (0, 1, ...),
kurā atrodas simbols s augsta līmeņa virknē v.
Ja nav atrasts, tad atgriež negatīvu vērtību (-1).
****************************************************/
int find(string v, char s)
{
cout << "Apstrādā augsta līmeņa simbolu virkni" << endl;
for (int i=0; i<v.length(); i++)
if (v[i]==s) return i;
return -1;
}

int main()
{
char vz[81];
string va;
char c;
int ok; /// lietotāja atbilde: 1 - turpināt, 0 - beigt

do
{

cout << "Ievadiet virkni, ne garāku par 80 simboliem: " << endl;

cin.getline(vz, 81);
cout << "Virkne: " << vz << endl;
cout << "Ievadiet meklējamo simbolu: "<< endl;
cin.get(c);
cout << endl;
cout << find (vz, c) << endl;
cin.ignore(); /// lai sāktu no tukšas plūsmas
cout << "Ievadiet virkni" << endl;
getline(cin,va);
cout << "Ievadiet meklējamo simbolu: "<< endl;
cin.get(c);
cout << endl;
cout << find (va, c) << endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
cin.ignore(); /// lai sāktu no tukšas plūsmas
}while(ok == 1);

return 0;
}
/***** Testu plāns ********************************
 vzema vaugsta          c   paredzamais rezultāts
  te ir                 i    3
  te ir                 i    3
  te nav                i   -1
  te nav                i   -1
***************************************************/
